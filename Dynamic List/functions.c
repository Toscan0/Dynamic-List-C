#include "functions.h"

List* createList(){
	List* lst = (List*) malloc(sizeof(List));

	lst->size = 0;
	lst->head = NULL;

	return lst;
}

void printList(List* lst){
	Node* node = lst->head;

	if(!isEmpty(lst)){
		while(node != NULL){
			printf("%d ", node->dataNode.value);
			node = node->next;
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
		Node* node = lst->head;
		lst->head = node->next;

		free(node);
		lst->size--;
	}
}

Node* nodeAtPos(List* lst, int index){
	if(index >= 0 && index < lst->size){
		Node* node = lst->head;

		for(int i = 0; i < index; i++){
			node = node->next;
		}
		return node;
	}
	else{
		return NULL;
	}
}

int nodeIndex(List* lst, Node* node){
	if(isEmpty(lst)){
		return -1;
	}
	else{
		Node* auxNode = lst->head;

		while(node != NULL){
			printf("%d ", node->dataNode.value);
			node = node->next;
		}
	}
}

/*Node* node = lst->head;

	if(!isEmpty(lst)){
		while(node != NULL){
			printf("%d ", node->dataNode.value);
			node = node->next;
		}
		printf("\n");
	}
	else{
		printf("This list is empty\n");
	}*/