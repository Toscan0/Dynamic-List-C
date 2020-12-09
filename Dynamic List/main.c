/**/
#include <stdio.h>
#include "functions.h"

int main()
{
    printf("\n--- Program started ---\n");
    
    List* lst = createList();

    DataNode dt;
    dt.value = 5;
    push(lst, dt);
    dt.value = 4;
	push(lst, dt);


	printList(lst);

	
	printf("%d\n", nodeAtPos(lst, 1)->dataNode.value);
	//pop(lst);
	//printList(lst);

    printf("\n--- Program Finished ---\n");
    return 0;
}
/**/


/*int main(){
	int firstvalue = 5, secondvalue = 15;
	int * p1, * p2;

	p1 = &firstvalue;  // p1 = address of firstvalue
	p2 = &secondvalue; // p2 = address of secondvalue



	*p1 = 10; // value pointed to by p1 = 10, ao mudares o *p1 mudas tbm o firstvalue, 
	printf("firstvalue is: %d\n", firstvalue); // firstvalue = 10

	*p2 = *p1; // value pointed to by p2 = value pointed to by p1 ou seja o secondvalue = *p2 = *p1 = firstcalue = 10
	printf("secondvalue is: %d\n", secondvalue); // secondvalue = 10

	p1 = p2; // p1 = p2 (value of pointer is copied) , o p1 que estava a apontar para first value fica a apontar para second value porque p2 = &secondvalue;


	*p1 = 20; // aqui ao mudares o *p1 mudas o second value e nao o first value, porcausa da linha acima,  ou seja seconde value = *p1 = *p2 = 20

	printf("firstvalue is: %d\n", firstvalue); 
	printf("secondvalue is: %d\n", secondvalue); 

	return 0;
}*/
 


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
