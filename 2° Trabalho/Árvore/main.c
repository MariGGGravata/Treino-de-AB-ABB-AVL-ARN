#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "arvore.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	
int main(int argc, char *argv[]) {
	
	TNo *raiz;
	raiz = criar(1);
	exibe(raiz);
	raiz->esq = criar(2);
	raiz->dir = criar(3);
	raiz->esq->esq = criar(4);
	raiz->esq->dir = criar(5);
	exibeEsq(raiz);
	
	
	TNoN *raizN;
	raizN = criarN(1, 3);
	exibeN(raizN);
	raizN->filhos[0] = criarN(2,2);
	raizN->filhos[1] = criarN(3,1);
	raizN->filhos[2] = criarN(4, 5);	
	
	
	return 0;
}

