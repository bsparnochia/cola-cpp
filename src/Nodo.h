#ifndef NODO_H_
#define NODO_H_

class Nodo{
private:
	int dato;
	Nodo* siguiente;

public:
	/**
	 * @post: se crea el nodo con el nuevo dato
	 */
	Nodo(int nuevoDato){
		this->dato = nuevoDato;
		this->siguiente = nullptr;
	}

	/**
	 * @post: devuelve el dato del Nodo
	 */
	int getDato(){
		return dato;
	}

	/**
	 * @post: cambia el valor del dato por nuevoDato
	 */
	void setDato(int nuevoDato){
		this->dato = dato;
	}

	/**
	 * @post: devuelve el siguiente Nodo
	 */
	Nodo*& getSiguiente(){
		return siguiente;
	}

	/**
	 * @post: cambia el siguiente Nodo por nuevoSiguiente
	 */
	void setSiguiente(Nodo *nuevoSiguiente){
		this->siguiente = nuevoSiguiente;
	}
};

#endif /* NODO_H_ */
