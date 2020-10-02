#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "carteira.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	TCarteira *cart;
	
	cart = criar(0.0);
	
	mostrar(cart);
	printf("\n-----------------\n");
	depositar(cart, 10.50);
	mostrar(cart);
	retirar(cart, 5.33);
	printf("\n-----------------\n");
	mostrar(cart);
	
	return 0;
}
