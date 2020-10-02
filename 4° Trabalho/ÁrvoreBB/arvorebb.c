#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "arvorebb.h"


TNo *criar(int v){
	
	TNo *r = (TNo *)malloc(sizeof(TNo));
	r->valor = v;
	r->esq = NULL;
	r->dir = NULL;
	
	return r; 
}

void exibir(TNo *r){
	
   if (r != NULL) {
   	
      exibir(r->esq);
      
      printf ("%d\n", r->valor);
      
      exibir(r->dir); 
      
   }
}
/*
int buscabb(TNo *r, int n){
	
	if(r == NULL || r->valor == n){
		
		return r;
		
	} else if(n < r->esq){
		
		return buscabb(r->esq, n);
		
	} else{
		
		return buscabb(r->dir, n);
	}
}
*/
void preordem(TNo *r){
	
	printf("%d\n", r->valor);
	
	if (r->esq != NULL){
		
		preordem(r->esq);
			
	}
	
	if (r->dir != NULL){
		
		preordem(r->dir);
		
	} 
}

void ordemsim(TNo *r){
	
	if (r->esq != NULL){
		
		ordemsim(r->esq);	
		
	}
	
	if (r->esq == NULL && r->dir == NULL){
		
		printf("%d\n", r->valor);
		
	}
	
	if (r->dir != NULL){
		
		ordemsim(r->dir);
		
	} 	
}

void posordem(TNo *r){
	
	if (r->esq != NULL){
	
		posordem(r->esq);
		
	}
	
	if (r->dir != NULL){
		
		posordem(r->dir);
		
	}
	
	if (r->esq == NULL && r->dir == NULL){
		
		printf("%d\n", r->valor);
		
	}
}

int buscabbn(TNo *r, int n){
	
	TNo *ptb = r;
	
	while (ptb != NULL && ptb->valor != n){
		
		if(n > ptb->valor){
			
			ptb = ptb->dir;
			
		} else{
			
			ptb = ptb->esq;
			
		}
	}
	
	return ptb;
}

int insercao(TNo *r, int n){
	
	TNo *ptb = r;
	
	while (ptb->esq == NULL && n < ptb->valor){
		
		TNo *novo = criar(n);
		
		if(novo->valor < ptb->valor){
			
			ptb->esq = novo;
			ptb = ptb->esq;
			
		} else{
			
			ptb->dir = novo;
			ptb = ptb->dir;
			
		}
	}
	
	return ptb;
}

int varreduraE(TNo *r){
 	
	if (r->esq == NULL) {
	 	
    	return r;
    	
   	} else{
   		
   		return varreduraE(r->esq);
	}
	
}

