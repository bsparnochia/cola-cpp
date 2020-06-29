#ifndef COLA_H_
#define COLA_H_

#include "Nodo.h"

class Cola{
private:
	Nodo* primero;
	Nodo* ultimo;
	unsigned int cantidadElementos;

public:
	/**
	 * @post: crea la Cola sin elementos
	 */
	Cola();

	/**
	 * @post: elimina los elementos de la Cola
	 */
	~Cola();

	/**
	 * @post: Si la Cola esta vacía el nuevo elemento se agrega en el frente,
	 * 		  caso contrario se agrega último
	 */
	void acolar(int dato);

	/*
	 * @pre: la Cola no esta vacía
	 * @post: elimina el elemento del frente
	 */
	void desacolar();

	/**
	 * @pre: la Cola no esta vacía
	 * @post: devuelve el elemento del frente
	 */
	int getFrente();

	/**
	 * @post: verifica si la Cola esta vacía
	 */
	bool estaVacia();

	/**
	 * @post: devuelve la cantidad de elementos de la cola
	 */
	int contarElementos();
};

#endif /* COLA_H_ */
