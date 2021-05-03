// Programa 2 - Daniela Cedeño.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>


using namespace std;

// Metodo  para numero_impar

void numero_impar(int numero) {

// Se crea un objeto tipo div_t para luego almacenar con un metodo el resultado
	
div_t resultado;

// Metodo div () permite realizar una división, en este caso entre 2 y con esto saber si el numero es par o impar

resultado = div(numero, 2);

// El condicional aplicado 

	if (resultado.rem > 0)

	{
		cout << numero << " es un numero impar" << endl;
	}

	else
	{
		cout << numero << " es un numero par" << endl;
	}

}




// Empieza el programa con la función main

int main() 
	
	{
	int numero;
	cout << "Ingrese un numero para saber si es par o impar" << endl;
	cin >> numero;
	
	//Invocacion del metodo

	numero_impar(numero);


	return 0;

}
    
