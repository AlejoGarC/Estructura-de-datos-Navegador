#include "TDAalejo.h"
#include <iostream>

bool esvacia (TDAalejo *p){
	if ((p==NULL) || (p->tope==NULL)){
		return true;	
	}else return false;
}

void insertar(TDAalejo *&p , string dato){
	nodo *auxi = new nodo; 
	auxi= crearnodo(dato);
	auxi->sig=p->tope;
	p->tope= auxi;
	imprimirndo(auxi);
}

void insertarr(TDAalejo *&p){
	nodo *auxi = new nodo;
	auxi=crearNodo();
	auxi->sig= p->tope;
	p->tope = auxi;
	imprimirndo(auxi);
}

void eliminar(TDAalejo *&p){
	nodo *auxi = new nodo;
	if (!esvacia(p)){
		auxi= p->tope;
		p->tope=auxi->sig;
	}
	imprimirndo(auxi);
	delete auxi;
}

TDAalejo *crearPila(){
    TDAalejo *p = new TDAalejo;
    p->tope = nullptr;
    return p;
}

#include "TDAPila_Thomas.h"
using namesapce std;

TDAPila *crearPila() {
	TDAPila *tope = new TDAPila;
	tope -> tope = nullptr;
	return tope; 
}

bool esVacia(TDAPila *p) {
	if (p == nullptr || p->tope == nullptr)
		return true;
	else 
		return false;
}

void insertar (TDAPila *&p, char dato) {
	if (esVacia(p)){
		p = crearPila(); 
	}
	nodo *aux = crearNodo(dato);
	aux->sig = p->tope;
	p->tope = aux;
}

void insertar (TDAPila *&p) {
	if (esVacia(p)){
        p = crearPila();
    }
    nodo *aux = crearNodo();
    aux -> sig = p -> tope;
    p -> tope = aux;
}

void eliminar(TDAPila *&p) {
	if (!esVacia(p)) {
		nodo *aux = p->tope;
		p->tope = p->tope -> sig;
		delete aux;
	}
}







