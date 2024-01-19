#include <stdio.h>

struct arvore {
  struct arvore *esq, *dir;
  int valor;
  int qtd;
};
typedef struct arvore *Arvore;

Arvore cria_arvore(int valor) {
  Arvore arvore = (Arvore) malloc(sizeof(struct arvore));
  arvore->valor = valor;
  arvore->esq = NULL;
  arvore->dir = NULL;
  arvore->qtd = 1;
}







Arvore busca( Arvore arvore, int valor) {
  if(arvore->valor == valor) {
    arvore->qtd = arvore->qtd +1;
    //return arvore;
  }
  else{
    if(valor < arvore->valor) {
     if(arvore->esq != NULL) {
       busca(arvore->esq, valor);
     }
     else {
       arvore->esq = cria_arvore(valor);

     }
    }
    else {
      if(arvore->dir != NULL){
        busca(arvore->dir, valor);
      }
      else {
        arvore->dir = cria_arvore(valor);
      }
    }
  }
}




int main(void) {
  printf("Hello World\n");
  return 0;
}
