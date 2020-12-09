#include "functions.h"

List* CreateList(){
	List* lst = (List*) malloc(sizeof(List));

	lst->size = 0;
	lst->head = NULL;

	return lst;
}

void push(List* lst, DataNode dt){
	Node* node = (Node*) malloc(sizeof(Node));

	node->dataNode = dt;
	node->next = lst->head;

	lst->head = node;
	lst->size++;
}