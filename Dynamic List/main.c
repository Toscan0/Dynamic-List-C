#include <stdio.h>
#include "functions.h"

int main()
{
    printf("\n--- Program started ---\n");
    
    List* lst = CreateList();

    DataNode dt;
    dt.value = 5;
    push(lst, dt);
    dt.value = 4;
	push(lst, dt);


	printList(lst);

	pop(lst);
	printList(lst);

    printf("\n--- Program Finished ---\n");
    return 0;
}

// #include <stdio.h>
// #include <stdlib.h> 

// typedef struct no { 
// 	int x;
//  	struct no *prox; 
// } NO;

// /*-----Aloca e preenche a memoria-----*/
// NO* f_a(int v)
// {
// 	NO* ap;
// 	ap = (NO *) calloc (1, sizeof(NO) ); 
// 	if (ap != NULL) { 
// 		ap->x = v; 
// 		ap->prox = NULL; 
// 	}
// 	return ap;
// }

// /*-----------------------*/
// NO* f_b(NO *b, NO *n)
// {
// 	if (b == NULL){
// 		printf("b is null, aka top\n");
// 		return n;
// 	}
// 	if (n == NULL){
// 		printf("n is null, aka aux\n");
// 		return b;
// 	}

// 	printf("(n->x) %% 2 %d\n", (n->x) % 2);
// 	if ( (n->x) % 2 == 0)
// 	{
// 		n->prox = b;
// 		return n;
// 	}
// 	return b;
// }

// /*---- Mostrar os dados da lista ----*/
// void f_c(NO *b)
// {
// 	while (b != NULL) 
// 	{
// 		printf("%2d", b->x);
// 		b = b->prox; 
// 	}
// 	printf("\n");
// }

// /*-----------------------*/
// int main ()
// {
// 	int i;
	
// 	NO *aux, *top=NULL;
	
// 	for (i=7; i>2; i = i-1)
// 	{
// 		aux = f_a(i);
// 		printf("aux->x: %d\n", aux->x);
// 		top = f_b(top, aux);
// 		f_c(top);
// 	}

// 	return 0;
// }
