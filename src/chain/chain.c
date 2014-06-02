#include <stdio.h>
#include "chain.h"

int node_create(Node_T** pp_node)
{
	if(NULL == pp_node) 
	{
		return -1;
	}

	*pp_node = (Node_T *)malloc(NODE_SIZE);
	if (NULL == *pp_node) 
	{
		return -2;
	}

	memset(*pp_node, 0, NODE_SIZE);

	return 0;
}


int node_destroy(Node_P* p_head)
{
	Node_T* p_next = NULL; 
	Node_T* p_tmp = NULL;

	if(NULL == p_head) 
	{
		return -1;
	}
	
	p_tmp = p_head->p_top;
	p_head->p_top = NULL;
	while (NULL != p_tmp->p_next) 
	{
		p_next = p_tmp->p_next;
		free(p_tmp);
		p_tmp = p_next;
		
	}
	free(p_tmp);
	
	return 0;
}


int node_insert(Node_P* p_head, Node_T* p_node)
{
	Node_T* p_tmp = NULL;

	if(NULL == p_head || NULL == p_node) 
	{
		return -1;
	}	

	if (NULL == p_head->p_top) 
	{
		p_head->p_top = p_node;
		return 0;
	}
	
	p_tmp = p_head->p_top;
	while (NULL != p_tmp->p_next) 
	{
		p_tmp = p_tmp->p_next;
	}	

	p_tmp->p_next = p_node;

	return 0;
}




int node_remove(Node_P* p_head, Node_Element_T data)
{
	Node_T* p_tmp = NULL;
	Node_T* p_next = NULL;
	Node_T* p_pre = NULL;
	
	if(NULL == p_top_node) 
	{
		return -1;
	}	

	p_tmp = p_head->p_top;
	

	while (data != p_tmp->data) 
	{
		p_pre = p_tmp;
		p_next = p_tmp->p_next;
		p_tmp = p_next;		
	}
	
	p_remove = p_top_node->p_top;
	p_next = p_top_node->p_top->p_next;
	p_pre->p_next = p_next;

	free(p_remove);

	return 0;
}

