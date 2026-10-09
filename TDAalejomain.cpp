#include "TDAalejo.h"
#include "TDAalejo.cpp"
#include <iostream>

using namespace std;

nodo *crearNodo(){
	string dato;
	nodo *aux= new nodo;
	cout<< "Ingrese info: ";
	getline(cin,dato);
	aux->info = dato;
	aux->sig= nullptr;
	return aux;
}

nodo *crearnodo(string info){
	nodo *auxi;
	auxi= new(nodo);
	auxi->info= info;
	auxi->sig= nullptr;
	return auxi;
}

void imprimirndo(nodo *imp){
	if (imp ==NULL){
		cout<<"Vacio"<<endl;
	}else{
		while (imp!=NULL){
			cout << endl<< imp->info;
			imp= imp->sig;
		}
	}
}

int main(){
	string name = "Alejo";
	nodo *nodo1;
	nodo1= new nodo;
	nodo *nodo2;
	nodo2= new nodo;
	nodo1=crearNodo();
	nodo2=crearnodo(name);
	imprimirndo(nodo1);
	imprimirndo(nodo2);
	
	TDAalejo *p;
	p = crearPila();
	insertar(p, "Riaño");
    insertarr(p);
    eliminar(p);
}
