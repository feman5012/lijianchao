#include <stdio.h>
#include "fifo.h"

int main (int argc, char* argv[]) 
{
	int i4_ret, i4_cmd;
	FIFO_T* p_fifo;

	i4_ret = -1;
	i4_cmd = 0;
	p_fifo = NULL;


	i4_ret = fifo_create(&p_fifo);
	if (0 != i4_ret) 
	{
		printf("l:%2d\n", __LINE__, i4_ret);
	}

	do {
		scanf("%d", &i4_cmd);
		i4_ret = fifo_push(i4_cmd, p_fifo);
		if (0 != i4_ret) 
		{
			printf("l:%2d, %2d\n", __LINE__, i4_ret);
		}	

		i4_cmd = fifo_pop(p_fifo);
		printf("i4_cmd = %2d\n", i4_cmd);
		

	} while(i4_cmd != 255);

	free(p_fifo);

	return 0;
}
