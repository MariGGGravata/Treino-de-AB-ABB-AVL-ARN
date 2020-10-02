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

void exibe(TNo *r){
	
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
	
	if(r->esq == NULL && r->dir == NULL){
		
		printf("%d\n", r->valor);
		
	}
	
	if(r->esq != NULL){
		
		preordem(r->esq);
		
	}
	
	if(r->dir != NULL){
		
		preordem(r->dir);
		
	}
}

void ordemsim(TNo *r){
	
	if(r->esq != NULL){
		
		ordemsim(r->esq);
		
	}
	
	if(r->esq == NULL && r->dir == NULL){
		
		printf("%d\n", r->valor);
		
	}
	
	if(r->dir != NULL){
		
		ordemsim(r->dir);
		
	}
}

void posordem(TNo *r){
	
	if(r->esq != NULL){
		
		posordem(r->esq);
		
	}
	
	if(r->dir != NULL){
		
		posordem(r->dir);
		
	}
	
	if(r->esq == NULL && r->dir == NULL){
		
		printf("%d\n", r->valor);
		
	}
}

int qtdNos(TNo *r){
	
	int esq = 0, dir = 0;
	
	if(r->esq != NULL){
		
		esq = qtdNos(r->esq);
		
	}
	
	if(r->dir != NULL){
		
		dir = qtdNos(r->dir);
		
	}
	
	return esq + dir + 1;	
}

int altura(TNo *r){
	
	int altesq = 0, altdir = 0;
	if(r->esq != NULL){
		
		altesq = altura(r->esq);
		
	}
	
	if(r->dir != NULL){
		
		altdir = altura(r->dir);
		
	}
	
	if(altesq > altdir){
		
		return altesq + 1;
		
	} else{
		
		return altdir + 1;
		
	}
}

int somaimpar(TNo *r){
	
	int esq = 0, dir = 0;
	
	if(r->esq != NULL){
		
		esq = somaimpar(r->esq);

	}
	
	if(r->dir != NULL){
		
		dir = somaimpar(r->dir);
	
	}
	
	if(r->valor % 2 != 0){
	
		return esq + dir + r->valor;
	
	} else{
		
		return esq + dir;
		
	}
}

int numrep(TNo *r, int n){
	
	int esq = 0, dir = 0;
	
	if(r->esq != NULL){
		
		esq = numrep(r->esq, n);

	}
	
	if(r->dir != NULL){
		
		dir = numrep(r->dir, n);
	
	}
	
	if(r->valor == n){
		
		return esq + dir + 1;
	
	} else{
		
		return esq + dir;
		
	}
}

void inserirdir(TNo *r, int n){
	
	TNo *ptno = r;
	
	while(ptno->dir != NULL){
		
		ptno = ptno->dir;
		
	}
	
	ptno->dir = criar(n);
}

int comparar(TNo *a, TNo *b){
	
	int resultdir = 0, resultesq = 0;
  
	if (a->valor != b->valor){
  	
		return 0;
  	
  	}else {
  		
    	resultdir = comparar(a->dir, b->dir);
    	resultesq = comparar(a->esq, b->esq);
    	return resultdir * resultesq;
    	
  	}
}

int menoresvalores(TNo *r, int n){
	
	int somaesq = 0, somadir = 0;
	
    if (r->esq != NULL){
    	
    	somaesq = menoresvalores(r->esq, r->esq->valor);
    	
	}
	
    if (r->dir != NULL){
    	
    	somadir = menoresvalores(r->dir, r->dir->valor);
    	
	} 
    
    if(r->valor < n){
    	
    	return somaesq + somadir + 1;
    	
	} else{
		
		return somaesq + somadir;
		
	}
	
}

