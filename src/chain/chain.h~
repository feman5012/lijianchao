#ifndef __CHAIN_H__
#define __CHAIN_H__

#define NODE_SIZE    sizeof(Node_T)

typedef char Node_Element_T;

typedef struct Node {
	Node_Element_T data;
	struct Node*   p_next;
} Node_T;

typedef struct {
	Node_T* p_top;
} Node_P;

extern int node_create(Node_T** pp_node);
extern int node_destroy(Node_P* p_top_node);
extern int node_insert(Node_P* p_top_node, Node_T* p_node);
extern int node_remove(Node_P* p_top_node, Node_Element_T data);


#endif



