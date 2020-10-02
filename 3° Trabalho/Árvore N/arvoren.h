
typedef struct NoN{
	
	int valor;
	int qtd;
	struct NoN **filhos;
	
} TNoN;

TNoN *criarN(int v, int q);
void exibeN(TNoN *r);
void constroiBin(TNoN *r);
int somavalor(TNoN *r, int n);
void inserevalor(TNoN *r, int n);
void inserevalordir(TNoN *r, int n);
int maiorvalor(TNoN *r);
