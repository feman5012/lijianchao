#include <stdio.h>
#include "fifo.h"


int fifo_push (int i4_cmd, FIFO_T* p_fifo)
{
	int i4_end;
	int i;

	if (NULL == p_fifo) 
	{
		return -1;
	}

	if (p_fifo->count >= MAX_FIFO_SIZE) 
	{
		return -2;		
	}
	
	i4_end = (p_fifo->front + p_fifo->count) % MAX_FIFO_SIZE;
	p_fifo->cmd[i4_end]	= i4_cmd;
	p_fifo->count++;	

	for (i = 0; i < MAX_FIFO_SIZE; i++) 
	{
		printf("l:%2d,cmd:%4d  ", __LINE__, p_fifo->cmd[i]);
	}
	printf("\n");

	return 0;
}

int fifo_pop (FIFO_T* p_fifo)
{
	int i, i4_cmd;

	if (NULL == p_fifo) 
	{
		return -1;
	}	

	if (p_fifo->count <= 0) 
	{
		return -2;		
	}

	i4_cmd = p_fifo->cmd[p_fifo->front];
	p_fifo->count--;
	p_fifo->front = (p_fifo->count == 0) ? 0 : (p_fifo->front % MAX_FIFO_SIZE);

	for (i = 0; i < MAX_FIFO_SIZE; i++) 
	{
		printf("l:%2d,cmd:%4d  ", __LINE__, p_fifo->cmd[i]);
	}
	printf("\n");

	return i4_cmd;
}

int fifo_create (FIFO_T** p_fifo)
{

	*p_fifo = (FIFO_T *)malloc(sizeof(FIFO_T));
	if (NULL == *p_fifo) 
	{
		return -2;
	}		

	memset(*p_fifo, 0, sizeof(FIFO_T));

	return 0;
}




