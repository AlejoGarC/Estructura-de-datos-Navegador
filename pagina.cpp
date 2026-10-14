#include "pagina.h"
#include <iostream>
/*Las funciones no deben seguir recibiendo pagina, hay que crear una funcion que funcione 
para cualquier otra donde se retorne el nodo actual, o que cada funcion pueda hacerlo, para que este se reciba entre
ellas y poder editar EL NODO (pestana) que el usuario quiere modificar , no las paginas enteras, ya que cuando se 
quiere hacer una modificacion hay que empezar por la cabeza , cuando es posible que el usuario quiera el nodo del medio*/
pagina *crearPagina(TDAListaCircular *&lista){ //crea la pagina 
	if (esvacia)
		TDAListaCircular *lista= new TDAListaCircular;
		TDAListaCircular *pagina = new TDAListaCircular;
		nodo *nuevo= new nodo;
		
		lista= Inicilizar();
		nuevo = CrearNodo();
		pagina = crearLista(lista *c, nuevo)
		nuevaPestana(pagina);
		
	}else{
		cout<<"Solo puedes tener una pagina abierta en curso. Abre una nueva pestaña"<<endl;
	}
	return pagina;
}

void nuevaPestana(pagina *p){ //crea la pestaña 
	nodo *usuario= new nodo;
	pagina *pestana= new pestana;
	if (p->pestanas->cab==p->pestanas->cola==nullptr){
		pestana=p->pestanas->cab;
		pestana=p->pestanas->cola;
	}else{
		p->pestanas->cola= aux;
		
	}
	TDAalejo pila1 = new TDAalejo;
	int estado;
	usuario = CrearNodo();
	pestana = addNodo(pagina, nodo *n);
	pila1 = crearPila();
	recents(pestana, pila1);	
}

void recents (pagina *p, historial *pila1){
	string dato;
	cout<< "Ingrese una nueva accion"<<endl;
	getline(cin,dato);
	insertar(pila1 , dato);
	p->pestanas->cab->info->recents=pila1;
}
void controly (pagina *p, TDAalejo *pila1){
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
    	cout << left << setw(30) << p << setw(90) << p->hist->recents->tope;
    	p= p->sig;
	}
    
} 
