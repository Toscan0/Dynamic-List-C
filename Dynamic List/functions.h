#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "listStruct.h"

List* createList();
void printList(List* lst);
bool isEmpty(List* lst);
void push(List* lst, DataNode dt); //add a node to the start of the list
void pop(List* lst); //remove the first node from the list
Node* getNodeByIndex(List* lst, int index);
int getNodeIndex(List* lst, Node* node);
void deleteNodeByIndex(List* lst, int index);
void insertNodeAtIndex(List* lst, DataNode dt, int index);

#endif