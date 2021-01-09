#include "..\Headers\Precom.h"
#include "..\Headers\QuikSort.h"


bool quickSort(int*& arreglo, const int& elementos)// Ingresa un puntero que contiene la direccion a un arreglo.
{
	// arreglo---> Recibe un puntero a un arreglo
	// elementos-> Recibe la cantidad de elementos del arreglo que ingresa.
	
	int inicio = 0;//--------------> Se obtine la posision inicial del arreglo.
	int fin = elementos - 1;//-----> Se obtiene la posision final del arreglo.
	
	_auxQuick(arreglo, inicio, fin);

	return false;
}

bool _auxQuick(int*& arreglo, int inicio, int fin)
{
	// arreglo-----> Recibe la direccion donde se encuentra el arreglo en el que se esta trabajando
	// inicio------> Recibe la direccion o indice en la que va iniciar el algoritmo.
	// fin---------> Recibe la direccion o indice donde termine el arreglo que se va analizar.

	if (inicio < fin)
	{
		int pivote = _ubicarPivote(arreglo, inicio, fin);

		_auxQuick(arreglo, inicio, pivote - 1);// Analiza el sub arrelgo izquierdo.
		_auxQuick(arreglo, pivote + 1, fin);// Ultimo tiene el ultimo elemento de la sub lista actual.

		return true;

	}
	return true;
}

bool rellenarArreglo(int*& arreglo, const int& elementos)// Ingresa un puntero que contiene la direccion a un arreglo.
{
	// arreglo---> Recibe un puntero a un arreglo
	// elementos-> Recibe la cantidad de elementos del arreglo que ingresa.


	int numero = 1 + rand() % 100;// Genera numeros aleatorios entre 1 y 100.
	
	for (int c = 0; c < elementos; c++)
	{
		arreglo[c]= 1 + rand() % (100);
				
	}
	return true;
}

int _ubicarPivote(int*& arreglo, int inicio, int fin)// Para ubicar el pivote el algoritmo inicia en la posicion de inicio del arreglo.
{
	// arrglo----> Recibe la direccion donde se encuentra el arreglo a ordenar.
	// inicio----> Recibe la posicion incial o direccion donde se inicia la busqueda de pivote.
	// final-----> Recibe la posicion final donde termina el arreglo el sub arreglo.
	
	int aux = 0;
	while (inicio<fin)
	{
		while (arreglo[inicio] <= arreglo[fin] && inicio < fin)
			fin--;
		aux = arreglo[inicio]; //--------> Inicia intercambio de valores
		arreglo[inicio] = arreglo[fin];
		arreglo[fin] = aux;//------------> Termina intercambio de valores.
		
		while (arreglo[inicio] < arreglo[fin] && inicio < fin)
			inicio++;
		aux = arreglo[inicio];
		arreglo[inicio] = arreglo[fin];
		arreglo[fin] = aux;
	}

	return inicio;// Inicio y fin apuntan a la misma posicion, que es donde debe de quedar el pivote.
}
