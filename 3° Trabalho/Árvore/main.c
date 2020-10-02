#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "arvore.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	TNo *raiz;
	raiz = criar(1);
	raiz->esq = criar(2);
	raiz->dir = criar(3);
	raiz->esq->esq = criar(4);
	raiz->esq->dir = criar(5);
	raiz->dir->esq = criar(6);
	
	/*
	TNo *raiz2;
	raiz2 = criar(1);
	raiz2->esq = criar(2);
	raiz2->dir = criar(3);
	raiz2->esq->esq = criar(4);
	raiz2->esq->dir = criar(5);
	raiz2->dir->esq = criar(7);
	*/
	
	//preordem(raiz);
	
	//printf("\n%d", qtdNos(raiz));
	//printf("\n%d", altura(raiz));
	
	//printf("\n%d", somaimpar(raiz));
	
	//printf("%d", numrep(raiz, 2));
	
	//inserirdir(raiz, 7);
	//preordem(raiz);
	
	printf("%d", menoresvalores(raiz, 5));
	
	return 0;
}
