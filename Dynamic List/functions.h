#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "listStruct.h"

List* createList();

void printList(List* lst);
bool isEmpty(List* lst);

// Gets
Node* getNodeByIndex(List* lst, int index);
int getNodeIndex(List* lst, Node* node);

// Inserts
void insertNodeAtBeginning(List* lst, DataNode dt);
void insertNodeAtIndex(List* lst, DataNode dt, int index);
void insertNodeAtEnd(List* lst, DataNode dt);
void insertNodeAtEndByLastNode(List* lst, Node* lastNode, DataNode dt);

// Deletes
void deleteFirstNode(List* lst);
void deleteNodeByIndex(List* lst, int index);

#endif