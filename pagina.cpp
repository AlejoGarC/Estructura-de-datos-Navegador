#include "pagina.h"
#include <iostream>
#include <iomanip>
/*Las funciones no deben seguir recibiendo pagina, hay que crear una funcion que funcione 
para cualquier otra donde se retorne el nodo actual, o que cada funcion pueda hacerlo, para que este se reciba entre
ellas y poder editar EL NODO (pestana) que el usuario quiere modificar , no las paginas enteras, ya que cuando se 
quiere hacer una modificacion hay que empezar por la cabeza , cuando es posible que el usuario quiera el nodo del medio*/
void *crearPagina(TDAListaCircular *&lista){ //crea la pagina 
	if (esVacia){
	
		TDAListaCircular *lista= new TDAListaCircular;
		TDAListaCircular *pagina = new TDAListaCircular;
		usuario *nuevo= new usuario;
		
		lista= Inicilizar();
		nuevo = CrearNodo();
		pag = crearLista(lista c, nuevo);
		nuevaPestana(pag);
	}else{
		cout<<"Solo puedes tener una pagina abierta en curso. Abre una nueva pestaña"<<endl;
	}
	
}

void nuevaPestana(pagina *p){ //crea la pestaña 
	nodo *user= new nodo;
	nodo *aux = new nodo;
	user = CrearNodo();
	if (p->pestanas->cab==p->pestanas->cola==nullptr){
		pestana=p->pestanas->cab;
		pestana=p->pestanas->cola;
	}else{
		p->pestanas->cola= aux;
		aux->sig = user;
		p->pestanas->cola = user;
	}
	pestana = addNodo(pagina, nodo *user);
	TDAalejo pila1 = new TDAalejo;
	pila1 = crearPila();
	recents(usuario, pila1);	
}

void recents (nodo *p){
	string dato;
	cout<< "Ingrese una nueva accion"<<endl;
	getline(cin,dato);
	insertar(usuario , dato);
	p->info->recents=pila1;
}
void controly (nodo *p, TDAalejo *pila1){
	int opcion;
	string dato;
	pila1 = p->pestanas->cab->info->recents;
	pagina *deshacer= new deshacer;
	deshacer= p->pestanas->cab->info->y;
	pagina *ultimo = new pagina;
	cout << "¿Esta seguro de que quiere deshacer?"<<endl<<"Ingrese (1) para continuar o (0) para abortar"<<endl;
	cin<< opcion;
	if (opcion==1){
		if (deshacer== nullptr){
			pila2 = crearPila();
		}
		ultimo = p->pestanas->cab->info->recents->tope->info;
		dato= ultimo;
		insertar(pila2 , dato);
		eliminar(pila1);
		cout << "Accion actual: "<< pila1->recents->tope->info;
	}
	
}

void mostrar(pagina *p){
	cout << fixed << setprecision(2);
    cout << "\n"
         << string(120, '-') << endl;
    cout << left
         << setw(30) << "Pestanas"
         << setw(90) << "Nombre pestana"
         << endl;
    cout << string(120, '-') << endl;
    p = p->pestanas->cab;
    while (p->sig!=p){
    	cout << left << setw(30) << p << setw(90) << p->pestanas->cab->info->recents;
    	p= p->sig;
	}
    
} 
