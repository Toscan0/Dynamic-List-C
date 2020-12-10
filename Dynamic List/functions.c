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

Node* getNodeByIndex(List* lst, int index){
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

int getNodeIndex(List* lst, Node* node){
	int index = 0;

	if(isEmpty(lst)){
		return -1;
	}
	else if(node == NULL){
		return -1;
	}
	else{
		Node* auxNode = lst->head;

		while(node != NULL){
			if(node->dataNode.value == auxNode->dataNode.value && 
				node->next == auxNode->next){
				return index;
			}
			auxNode = auxNode->next;
			index++;
		}
		return -1; //node not found
	}
}


void deleteNodeByIndex(List* lst, int index){
	Node *previous, *toDelete; 

	if(!isEmpty(lst)){
		if(index < 0){
			printf("index not valid, index used:  %d\n", index);
		}
		else if(index == 0){
			pop(lst);
		}
		else{
			toDelete = getNodeByIndex(lst, index);

			if(toDelete == NULL){
				printf("index not valid, index used:  %d\n", index);
			}
			else{
				previous = getNodeByIndex(lst, index - 1);

				previous->next = toDelete->next;
				free(toDelete);

				lst->size--;
			}
		}
	}
}


void insertNodeAtIndex(List* lst, DataNode dt, int index){
	Node *current, *previous;

	if(!isEmpty(lst)){
		if(index < 0){
			printf("index not valid, index used:  %d\n", index);
		}
		else if(index == 0){
			push(lst, dt);
		}
		else{
			current = getNodeByIndex(lst, index);
			previous = getNodeByIndex(lst, index - 1);

			if(current != NULL && previous != NULL){
				Node* newNode = (Node*) malloc(sizeof(Node));

				newNode->dataNode = dt;
				
				previous->next = newNode;

				newNode->next = current;

				lst->size++;

			}
			else if(current == NULL && previous != NULL){ 
				//node is the last element

				Node* newLastNode = (Node*) malloc(sizeof(Node));
				newLastNode->dataNode = dt;
				newLastNode->next = NULL;

				previous->next = newLastNode;

				lst->size++;
			}
			else{
				printf("index not valid, index used:  %d\n", index);
			}
		}
	}
	else{
		/*
		* TODO: if lst is empty add create list and add to the beggin
		*/
	}
}
