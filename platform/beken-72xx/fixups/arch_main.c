/**
 ****************************************************************************************
 *
 * @file arch_main.c
 *
 * @brief Main loop of the application.
 *
 * Copyright (C) Beken Corp 2011-2020
 *
 ****************************************************************************************
 */
#include "BkDriverFlash.h"
#include "BkDriverWdg.h"
#include "driver_pub.h"
#include "func_pub.h"
#include "include.h"
#include "intc.h"
#include "param_config.h"
#include "start_type_pub.h"

#if CFG_SUPPORT_BOOTLOADER
void entry_set_world_flag(void) {
	*(volatile uint32_t *)0x00400000 = 1;
}
#endif // CFG_SUPPORT_BOOTLOADER

extern void main(void);

#ifdef LIBRETUYA
// beken-72xx has printf_port.h
extern void __wrap_bk_printf_disable();
extern void __wrap_bk_printf_enable();
#endif

void entry_main(void) {
	// compatibility with BK7231S_1.0.5
#if CFG_SUPPORT_BOOTLOADER
	entry_set_world_flag();
#endif
	// suppress all output during initialization
#if LIBRETUYA
	__wrap_bk_printf_disable();
#endif
	// read reboot cause into bk_misc_get_start_type()
	bk_misc_init_start_type();
	// clear driver registration arrays
	driver_init();
	// reboot the board if start_type == RESET_SOURCE_CRASH_PER_XAT0
	bk_misc_check_start_type();
	// init drivers
	intc_init();
	hal_flash_init();
	cfg_param_init();
	// enable watchdog
#if CFG_INT_WDG_ENABLED
	bk_wdg_initialize(CFG_INT_WDG_PERIOD_MS);
	bk_wdg_reload();
#endif
	// enable bk_printf output again
#if LIBRETUYA
	__wrap_bk_printf_enable();
#endif
	// run the app
	main();
}
