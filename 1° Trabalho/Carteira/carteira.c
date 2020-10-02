#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "carteira.h"

struct Carteira{
	
	float valor;
	
};

TCarteira * criar(float v){
	
	TCarteira *c = (TCarteira *)malloc(sizeof(TCarteira));
	c->valor = v;
	
	return c;
	
}

void depositar(TCarteira *c, float v){
	
	c->valor = c->valor + v;
	
}

void retirar(TCarteira *c, float v){
	
	c->valor = c->valor - v;
	
}

float mostrar(TCarteira *c){
	
	printf("%.2f", c->valor);
	
}
