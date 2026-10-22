#include "TDANodoCircular.h"
#include "TDAListaCircular.h"
#include "TDAalejo.h"
#include "pagina.h"
#include <iostream>

int menu(){
	cout << "--------------- MENU ---------------"<<endl
		<<"Ingrese una opcion numerica: " 
			<<"1) Nueva pestana"<<endl
			<<"2) Moverse"<<endl
			<<"3) Visitar"<<endl
			<<"4) Salir";
	
	int opcion;
	cin>> opcion;
	return opcion;
}

int main(){
	
	int opcion;
	bool salir= false;
	opcion= menu();
	pagina *p= new pagina;
	while (salir!=true){
		opcion= menu();
		switch (opcion){
		case 1:{
			nuevaPestana(p);
			break;
		}
		/*
			case 2:{
			moverse(p);
			break;
		}
		case 3:{
			visitar(p);
			break;
		}*/
		case 4 :{
			salir = true;
			break;
		}
	}
	}
	
	return 0;
}

