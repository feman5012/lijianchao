#include <stdio.h>

#include "cli.h"
#include "instrument.h"


static unsigned char c_power_off = 'N';

void cli (void) 
{
	unsigned short int ui1_yes_or_no = 0;

	printf("debug on/off (Y/N?), power off (S?)");
	scanf(" %c", &ui1_yes_or_no);
//	ui2_yes_or_no = getchar();
		
	switch (ui1_yes_or_no) 
	{
		case 'Y':
			{
				ins_set_dbg_level(1);	
				break;
			};

		case 'N':
			{
	
				ins_set_dbg_level(0);	
				break;
			}

		case 'S':
			{
				c_power_off = 'P';
				break;	
			}

		default:
			{
				break;
			}

	}		

}


unsigned char 
cli_get_status(
	void)
{
	return c_power_off;  
}


