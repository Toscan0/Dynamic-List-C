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
Node* nodeAtPos(List* lst, int index);
int nodeIndex(List* lst, Node* node);

#endif