/******************************************************************************
 * Copyright 2013-2014 Espressif Systems (Wuxi)
 *
 * FileName: user_main.c
 *
 * Description: entry file of user application
 *
 * Modification history:
 *     2014/1/1, v1.0 create this file.
*******************************************************************************/
#include "ets_sys.h"
#include "osapi.h"
#include "user_interface.h"
#include "cosmart/log.h"
#include "cosmart/cosmart.h"

/******************************************************************************
 * FunctionName : user_init
 * Description  : entry of user application, init user function here
 * Parameters   : none
 * Returns      : none
*******************************************************************************/
void user_init(void)
{
	// 启动Comart
	Cosmart_initialize();
}

/******************************************************************************
 * FunctionName : user_rf_pre_init
 * Description  : It is provided for RF initialization.
 * Parameters   : none
 * Returns      : none
*******************************************************************************/
void user_rf_pre_init(void)
{
	// TODO
}
