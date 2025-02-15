/*---------------------------------------------------------
Interface: TAD Arvore
-----------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>

typedef struct Nodo *ApNodo;
typedef int ItemArv;

typedef struct Nodo {
  ItemArv item;
  ApNodo esq, dir;
} Nodo;

typedef ApNodo ArvBin;

void criaArv( ArvBin* );
int arvVazia( ArvBin );
ArvBin insereArv( ItemArv , ArvBin ); /* insercao arv. bin. de busca */
void insereArvNivel( ItemArv, ArvBin* ); /* insercao por nivel */
void escreveArv( ArvBin );
int alturaArv( ArvBin );
int contaNoArv( ArvBin );
int arvCompleta( ArvBin ); 
void freeArv( ArvBin );
