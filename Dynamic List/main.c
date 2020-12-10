#include <stdio.h>
#include "functions.h"

int main()
{
	int index; 
	DataNode dt;

    printf("\n--- Program started ---\n");
    
    List* lst = createList();
    dt.value = 1;
    insertNodeAtBeginning(lst, dt);
    dt.value = 2;
    insertNodeAtBeginning(lst, dt);
    dt.value = 3;
    insertNodeAtIndex(lst, dt, 0);
    dt.value = 4;
    insertNodeAtIndex(lst, dt, 2);
    dt.value = 5;
    insertNodeAtIndex(lst, dt, 3);
    dt.value = 6;
    insertNodeAtIndex(lst, dt, 5);
    dt.value = 7;
    insertNodeAtIndex(lst, dt, 6);
	dt.value = 8;
    insertNodeAtEnd(lst, dt);
    dt.value = 9;
    insertNodeAtEnd(lst, dt);

    printf("Current list:\n");
	printList(lst);

	/** /
	printf("Value: %d\n", getNodeByIndex(lst, 1)->dataNode.value);
	/**/

	/** /
	printf("Index: %d\n", getNodeIndex(lst, lst->head->next)); 
	/**/

	/** /
	index = 2;
	printf("Deleted node by index: (index =  %d)\n", index);
	deleteNodeByIndex(lst, index);
	printList(lst);
	/**/

	/** /	
	printf("Deleted First Element\n");
	deleteFirstNode(lst);
	printList(lst);
	/**/

    printf("\n--- Program Finished ---\n");
    return 0;
}