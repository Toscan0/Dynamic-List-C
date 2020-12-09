#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

#include "listStruct.h"

List* CreateList();
void push(List* lst, DataNode dt); //add a node to the start of the list

#endif