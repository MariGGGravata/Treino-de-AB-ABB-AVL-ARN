#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a, *b;
	
	printf("Qual o valor atribuido a a?\n");
	scanf("%d", &a);
	
	b = (int*)malloc(sizeof(int));
	b = &a; //apontando para a variável a
	*b = *b * 2;
	printf("Valor de a: %d\nValor de b: %d\n", a, *b);
	b = (int*)malloc(sizeof(int));
	printf("Qual o valor atribuido a b?\n");
	scanf("%d", &b);
	b = &b;
	printf("Valor de a: %d\nValor de b: %d, %d\n", a, *b);
	
	return 0;
}
