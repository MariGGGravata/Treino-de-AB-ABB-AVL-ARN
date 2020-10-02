#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "arvore.h"


TNo *criar(int v){
	
	TNo *r = (TNo *)malloc(sizeof(TNo));
	r->valor = v;
	r->esq = NULL;
	r->dir = NULL;
	
	return r; 
}


TNoN *criarN(int v, int qtd){
	
	TNoN *r = (TNoN *)malloc(sizeof(TNoN));
	r->valor = v;
	r->filhos = (TNoN **)malloc(qtd * sizeof(TNoN *));
	
	int i;
	
	for( i = 0; i < qtd; i++){
		
		r->filhos[i] = NULL;
		
	}
	
	return r;
}

void exibe(TNo *r){
	
	printf("%d", r->valor);
	printf("\n--------------\n");
	
}

void exibeN(TNoN *r){
	
	printf("%d", r->valor);
	printf("\n--------------\n");
	
}


void exibeEsq(TNo *r){
	
	TNo *aux;
	aux = r;
	
	while(aux != NULL){
		
		exibe(aux);
		aux = aux->esq;
		
	}
	
}

void preordem(TNo *r){
	
	printf("%d", r->valor);
	
	int i;
	
	if(i = 0; )
	
}


