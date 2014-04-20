#ifndef __FIFO_H__
#define __FIFO_H__

#define MAX_FIFO_SIZE 10

typedef int FIFO_ELEMENT_T;
typedef struct FIFO {
	FIFO_ELEMENT_T cmd[MAX_FIFO_SIZE];	
	int front;
	int count;
} FIFO_T;

extern int fifo_push (int i4_cmd, FIFO_T* p_fifo);
extern int fifo_pop (FIFO_T* p_fifo);
extern int fifo_create (FIFO_T** p_fifo);

#endif

