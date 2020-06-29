#include <iostream>
#include "Cola.h"

using namespace std;

int main(){
	Cola fila;

	/* Agrego a la fila los siguiente números: */
	fila.acolar(5);
	fila.acolar(90);
	fila.acolar(300);
	fila.acolar(8);
	fila.acolar(947);
	fila.acolar(12);

	/* A medida que desarmo la fila exhibo los números
	 * y la cantidad de elementos restantes
	 */
	while (!fila.estaVacia()){
		cout << "cantidad de elementos : "<< fila.contarElementos() << endl;
		cout << "elemento del frente : " << fila.getFrente() << endl;
		fila.desacolar();
	}
	cout << "cantidad de elementos : "<< fila.contarElementos() << endl;
	return 0;
}


