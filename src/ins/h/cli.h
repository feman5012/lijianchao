#ifndef _CLI_H
#define _CLI_H_  

typedef void (*pfn_cli)(void);
typedef unsigned char (*pfn_status)(void);

extern unsigned char
cli_get_status(
        void);


void cli(void);


#endif
