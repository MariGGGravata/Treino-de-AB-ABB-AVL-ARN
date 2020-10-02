typedef struct No TNo;
typedef struct NoN TNoN;

struct No{
	
	int valor;
	TNo *esq;
	TNo *dir;
	
};

struct NoN{
	
	int valor;
	TNoN **filhos;
	
};

TNo *criar(int v);
TNoN *criarN(int v, int qtd);
void exibe(TNo *r);
void exibeN(TNoN *r);
void exibeEsq(TNo *r);
void preordem(TNo *r);


