#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "listStruct.h"

List* CreateList();
void printList(List* lst);
bool isEmpty(List* lst);
void push(List* lst, DataNode dt); //add a node to the start of the list
void pop(List* lst); //remove the first node from the list

#endif