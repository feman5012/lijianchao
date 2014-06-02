#include <stdio.h>
#include "chain.h"


int main (int argc, char* argv[])
{
	char str[101];
	char* p_str;
	Node_T *p_node = NULL;
	Node_T* p_tmp = NULL;
	Node_P  node_head;
	Node_P* p_head = NULL;


	printf("Enter a string: ");	
  	gets(str);

	p_head = &node_head;
	memset(p_head, 0, sizeof(Node_P));

	for (p_str = str; *p_str != NULL; p_node = NULL, p_str++) 
	{
		if (0 != node_create(&p_node)) 
		{
			printf("l:%d\n", __LINE__);	
		}
		p_node->data = *p_str;
		if (0 != node_insert(p_head, p_node)) 
		{
			printf("l:%d\n", __LINE__);	
		}
	}

	p_tmp = p_head->p_top;
	while (NULL != p_tmp->p_next) 
	{
		printf("%c", p_tmp->data);
		p_tmp = p_tmp->p_next;		
	}
	printf("%c\n", p_tmp->data);


	if (0 != node_destroy(p_head)) 
	{
		printf("l:%d\n", __LINE__);	
	}


#if 0
	printf("%c\n", p_head->p_top->data);


	p_tmp = p_head;
	while (NULL != p_tmp->p_top->p_next) 
	{
		printf("%c", p_tmp->p_top->data);
		p_next = p_tmp->p_top->p_next;
		p_tmp->p_top = p_next;		
	}
	printf("%c\n", p_tmp->p_top->data);



	if (0 != node_insert(p_head, p_node)) 
	{
		printf("l:%d\n", __LINE__);	
	}



	for (p_str = str; *p_str != NULL; p_node = NULL, p_str++) 
	{
		if (0 != node_create(&p_node)) 
		{
			printf("l:%d\n", __LINE__);	
		}
		p_node->data = *p_str;
		if (0 != node_insert(p_head, p_node)) 
		{
			printf("l:%d\n", __LINE__);	
		}

	}


	
	while (NULL != p_tmp->p_top->p_next) 
	{
		printf("%c", p_tmp->p_top->data);
		p_next = p_tmp->p_top->p_next;
		p_tmp->p_top = p_next;		
	}
	printf("%c\n", p_tmp->p_top->data);

	if (0 != node_destroy(p_head)) 
	{
		printf("l:%d\n", __LINE__);	
	}


	Node_T *p_node = NULL;
	Node_P  node_head;
	Node_P* p_top_node = NULL;
	char str[101];   /* String entered by user. */
	char* p_str;     /* Pointer used to traverse the string. */
	int str_cnt = 0;

	p_top_node = &node_head;
	memset(p_top_node, 0, sizeof(Node_P));


	printf("Enter a string: ");	
  	gets(str);  /* Read line, discard newline. */

	str_cnt = strlen(str);

	for (p_str = str; *p_str != NULL; p_str++) 
	{
		if (0 != node_create(&p_node);) 
		{
			printf("l:%d\n", __LINE__);	
		}

		if (0 != node_insert(p_top_node, p_node);) 
		{
			printf("l:%d\n", __LINE__);	
		}
	}
#endif

	return 0;
}
