#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "arvoren.h"

TNoN *criarN(int v, int q){
	
	TNoN *r;
	
	r = (TNoN*)malloc(sizeof(TNoN));
	r->qtd = q;
	r->valor = v;
	if (q > 0){
		
		r->filhos = (TNoN**)malloc(q*sizeof(TNoN*));
		
	} else{
		
		r->filhos = NULL;
		
	}
	
	int i;
	
	for(i = 0; i < q; i++){
		
		r->filhos[i] = NULL;
		
	}
	return r;
}

void exibeN(TNoN *r){
	
	printf("%d", r->valor);
	printf("\n--------------\n");
	
}

void constroiBin(TNoN *r){
	
	int i;
	
	for (i = 0; i < r->qtd; i++){
		
		if (r->filhos[i] != NULL){
			
			constroiBin(r->filhos[i]);
			
			if (i != r->qtd-1){
				
				TNoN *no = r->filhos[i];
				TNoN** novoFilhos = (TNoN**)malloc((no->qtd+1)*sizeof(TNoN*));
				
				int j;
				
				for (j = 0; j < no->qtd; j++){
					
					novoFilhos[j] = no->filhos[j];
					
				}
				
				novoFilhos[no->qtd] = r->filhos[i+1];
				no->qtd = no->qtd + 1;
				no->filhos = novoFilhos;	
			}
			
			if (i>0){
				
				r->filhos[i] = NULL;
				
			} 
		}
	}
}

int somavalor(TNoN *r, int n){
	
	int i, soma = 0;
	
	r->valor += n;
	
	for(i = 0; i < r->qtd; i++){
		
		if(r->filhos[i] != NULL){
		
			soma = somavalor(r->filhos[i], n);

		}
	}
	return soma + r->valor;
}

void inserevalor(TNoN *r, int n){
	
	int i;
	
	r->valor += n;
		
	for(i = 0; i < r->qtd; i++){
		
		if(r->filhos[i] != NULL){
			
			inserevalor(r->filhos, n);
			
		}
		
	}
	
}

int maiorvalor(TNoN *r){
	
    int max = r->valor;
    int i;
    
    if(r->filhos != NULL) {
    	
    	for(i = 0; i < r->qtd; i++) {
    		
            if(r->filhos[i] != NULL){
            	
                int temp = maiorvalor(r->filhos[i]);
                
                if(temp > max){
                	
                	max = temp;
                	
				}
            }
        }
    }
    
    return max;
}
