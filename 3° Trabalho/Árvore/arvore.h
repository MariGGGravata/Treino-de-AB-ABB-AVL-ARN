typedef struct No TNo;

struct No{
	
	int valor;
	TNo *esq;
	TNo *dir;
	
};

TNo *criar(int v);
void exibe(TNo *r);
void exibeEsq(TNo *r);
void preordem(TNo *r);
void ordemsim(TNo *r);
void posordem(TNo *r);
int qtdNos(TNo *r);
int altura(TNo *r);
int somaimpar(TNo *r);
int numrep(TNo *r, int n);
void inserirdir(TNo *r, int n);
int comparar(TNo *a, TNo *b);
int menoresvalores(TNo *r, int n);

