#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "arvorebb.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	TNo *raiz = criar(1);
	//exibir(raiz);
	
	raiz->esq = criar(2);
	raiz->dir = criar(3);
	raiz->esq->esq = criar(4);
	raiz->esq->dir = criar(5);
	raiz->dir->esq = criar(6);
	raiz->dir->dir = criar(7);
	
	//printf("%d\n", buscabb(raiz, 2));
	//printf("%d\n", buscabbn(raiz, 2));
	printf("%d\n", varreduraE(raiz));
	
	return 0;
}
