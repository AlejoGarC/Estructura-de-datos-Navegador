#ifndef TDAalejo_H
#define TDAalejo_H

#include<iostream>
#include <string>

using namespace std;

struct nodo{
	string info;
	nodo *sig;
};
struct TDAalejo{
	nodo *tope;
};

nodo *crearNodo(); 
nodo *crearnodo(string info);
void imprimirndo(nodo *imp);


TDAalejo *crearPila();
bool esvacia(TDAalejo *p);
void insertar(TDAalejo *&p , string dato);
void insertarr(TDAalejo *&p);
void eliminar(TDAalejo *&p);
#endif
