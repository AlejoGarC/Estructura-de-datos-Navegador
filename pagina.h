#ifndef PAGINA_H
#define PAGINA_H
#include<iostream>
#include"TDANodoCircular.cpp"
#include"TDAListaCircular.cpp"
#include "TDAalejo.cpp"
/*Crear un .h para cada una e incluirlo*/

struct pagina{
	TDAListaCircular *pestanas;
	nodo *actual;
	TDAalejo *historial;
};

pagina *crearPagina();
void nuevaPestana(pagina *p, usuario u);
void moverse(pagina *p);
void visitar(pagina *p, string url);
#endif
