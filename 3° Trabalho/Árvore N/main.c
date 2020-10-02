#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "arvoren.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	TNoN *raizN;
	
	raizN = criarN(1, 10);
	exibeN(raizN);
	inserevalor(raizN, 2);
	exibeN(raizN);
	
	return 0;
}
