#include <stdio.h>
#include "cli.h"
#include "test.h"


int main (int argc, char* argv[]) 
{
	pfn_cli	pfn_parse_cli = cli;
	pfn_status pfn_get_status = cli_get_status;
	pfn_task pfn_test = test;

	do {
		pfn_parse_cli();
		pfn_test();
	} while ('P' != cli_get_status());
	return 0;
}
