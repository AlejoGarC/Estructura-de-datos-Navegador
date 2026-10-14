#ifndef PAGINA_H
#define PAGINA_H
#include<iostream>
#include"TDANodoCircular.h"
#include"TDAListaCircular.h"
#include "TDAalejo.h"

struct pagina{
	TDAListaCircular *pestanas;
};

pagina *crearPagina();
void nuevaPestana(pagina *p);
void moverse(pagina *p);
void visitar(pagina *p, string url);
#endif
