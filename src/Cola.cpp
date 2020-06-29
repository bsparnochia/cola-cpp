#include "Cola.h"
#include <string>

Cola::Cola(){
	this->primero = nullptr;
	this->ultimo = nullptr;
	this->cantidadElementos = 0;
}

Cola::~Cola(){
	while ( primero != nullptr ){
		Nodo* aBorrar = primero;
		primero = aBorrar->getSiguiente();
		delete aBorrar;
	}
}

void Cola::acolar(int dato){
	Nodo* nuevo = new Nodo(dato);

	if ( primero == nullptr ){
		primero = nuevo;
	} else {
		ultimo->setSiguiente(nuevo);
	}

	ultimo = nuevo;
	this->cantidadElementos++;
}

void Cola::desacolar(){
	if(primero == nullptr){
		throw std::string("Se quizo desacolar una Cola vacía");
	}

	Nodo* removido = primero;
	primero = primero->getSiguiente();

	if (primero == nullptr){
		ultimo = nullptr;
	}

	delete removido;
	this->cantidadElementos--;
}

int Cola::getFrente(){
	if (primero == nullptr){
		throw std::string("No se puede obtener el frente de una Cola vacía");
	}

	return this->primero->getDato();
}

int Cola::contarElementos(){
	return this->cantidadElementos;
}

bool Cola::estaVacia(){
	return (primero == nullptr);
}

