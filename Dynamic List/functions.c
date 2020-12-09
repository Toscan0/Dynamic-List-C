#include "functions.h"

List* CreateList(){
	List* lst = (List*) malloc(sizeof(List));

	lst->size = 0;
	lst->head = NULL;

	return lst;
}

void printList(List* lst){
	Node* pointer = lst->head;

	if(!isEmpty(lst)){
		while(pointer != NULL){
			printf("%d ", pointer->dataNode.value);
			pointer = pointer->next;
		}
		printf("\n");
	}
	else{
		printf("This list is empty\n");
	}
}

bool isEmpty(List* list){
	return (list->head == NULL);
}


void push(List* lst, DataNode dt){
	Node* node = (Node*) malloc(sizeof(Node));

	node->dataNode = dt;
	node->next = lst->head;

	lst->head = node;
	lst->size++;
}

void pop(List* lst){

	if(!isEmpty(lst)){
		Node* pointer = lst->head;
		lst->head = pointer->next;

		free(pointer);
		lst->size--;
	}
}