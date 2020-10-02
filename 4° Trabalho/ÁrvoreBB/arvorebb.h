typedef struct No TNo;

struct No{
	
	int valor;
	TNo *esq;
	TNo *dir;
	
};

TNo *criar(int v);
void exibir(TNo *r);
int buscabb(TNo *r, int n);
int remocao(TNo *r, int n);

void preordem(TNo *r);
void ordemsim(TNo *r);
void posordem(TNo *r);
int buscabbn(TNo *r, int n);
int insercao(TNo *r, int n);
int varreduraE(TNo *r);


