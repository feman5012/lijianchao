#include <stdio.h>
#include <stdlib.h>

#include "instrument.h"

static unsigned short int ui2_g_ins_dbg_level = 1;


void __cyg_profile_func_enter( void *func_address, void *call_site )
                                __attribute__ ((no_instrument_function));

void __cyg_profile_func_exit ( void *func_address, void *call_site )
                                __attribute__ ((no_instrument_function));

void __cyg_profile_func_enter( void *this, void *callsite )
{
	/* Function Entry Address */
	if (1 == ui2_g_ins_dbg_level)
	{
		fprintf(stdout, "LJCE%p\n", (int *)this);
	}
}


void __cyg_profile_func_exit( void *this, void *callsite )
{
	if (1 == ui2_g_ins_dbg_level)
	{
		/* Function Exit Address */
 		fprintf(stdout, "LJCX%p\n", (int *)this);
	}
}


unsigned short int 
ins_get_dbg_level(
	void)
{
	return ui2_g_ins_dbg_level; 
}

void 
ins_set_dbg_level(
	unsigned short int ui2_dbg_level)
{
	ui2_g_ins_dbg_level = ui2_dbg_level;
}

