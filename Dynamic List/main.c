#include <stdio.h>
#include "functions.h"

int main()
{
	int index; 

    printf("\n--- Program started ---\n");
    
    List* lst = createList();

    DataNode dt;
    dt.value = 4;
    push(lst, dt);
    dt.value = 5;
	push(lst, dt);
	dt.value = 6;
	push(lst, dt);
	dt.value = 7;
	push(lst, dt);

	printf("Current list:\n");
	printList(lst);

	/**/
	printf("Value: %d\n", getNodeByIndex(lst, 1)->dataNode.value);
	/**/

	/**/
	printf("Index: %d\n", getNodeIndex(lst, lst->head->next)); 
	/**/

	/**/
	index = 2;
	printf("Deleted node by index: (index =  %d)\n", index);
	deleteNodeByIndex(lst, index);
	printList(lst);
	/**/


	printf("\n------\n");
	//printf("Insert new node by index: (index =  %d)\n", index);
	dt.value = 11;
	insertNodeAtIndex(lst, dt, 0);
	printList(lst);

	dt.value = 12;
	insertNodeAtIndex(lst, dt, 3);
	printList(lst);

	dt.value = 13;
	insertNodeAtIndex(lst, dt, 4);
	printList(lst);

	dt.value = 14;
	insertNodeAtIndex(lst, dt, 6);
	printList(lst);
	
	dt.value = 14;
	insertNodeAtIndex(lst, dt, 7);
	printList(lst);

	dt.value = 15;
	insertNodeAtIndex(lst, dt, 7);
	printList(lst);

	dt.value = 155;
	insertNodeAtIndex(lst, dt, 9);
	printList(lst);
	printf("------\n");
	
	/**/	
	printf("Deleted First Element\n");
	pop(lst);
	printList(lst);
	/**/
    
    printf("\n--- Program Finished ---\n");
    return 0;
}