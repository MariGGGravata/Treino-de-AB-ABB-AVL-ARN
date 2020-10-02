typedef struct Carteira TCarteira;

TCarteira * criar(float v);
void depositar(TCarteira *c, float v);
void retirar(TCarteira *c, float v);
float mostrar(TCarteira *c);
