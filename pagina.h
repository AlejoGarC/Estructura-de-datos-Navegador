#ifndef PAGINA_H
#define PAGINA_H
#include<iostream>
#include"TDANodoCircular.h"
#include"TDAListaCircular.h"
#include "TDAalejo.h"

struct pagina{
	TDAListaCircular *pestanas;
};

void *crearPagina(TDAListaCircular *&lista);
void nuevaPestana(pagina *p);
void recents (nodo *p);
void controly (nodo *p, TDAalejo *pila1);
void mostrar(pagina *p);
#endif
