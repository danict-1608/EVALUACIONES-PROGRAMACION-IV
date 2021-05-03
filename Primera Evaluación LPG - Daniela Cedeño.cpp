// Primera Evaluación LPG - Daniela Cedeño.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

// DANIELA CEDEÑO C.I.: 29.538.813

#include <iostream>
#include <iomanip>

using namespace std;
void calculo_cuota(double precio_total) {

	double porcentaje, porcentaje_inicial, cuota, porcentaje_cuota;

	// Calculo del porcentaje de la inicial

	porcentaje_inicial = precio_total * 20 / 100;


	cout << " \n \n La inicial de 20% es: " << fixed << setprecision(2) << porcentaje_inicial << endl;

	// Calculo de las cuotas 

	cout << "\n \n NOTA: Una carrera TSU en el IUTA tiene una duracion de 3 anos la cual se puede pagar en cuotas mensuales \n";

	porcentaje_cuota = precio_total * 80 / 100;

	cout << "\n \n El resto por pagar es de: " << fixed << setprecision(2) << porcentaje_cuota << endl;

	cuota = porcentaje_cuota / 36;

	cout << "\n \n Pagar por cada cuota: " << fixed << setprecision(2) << cuota << endl;
}

int main(){
	double N;
	std::cout << "\nSe calculara la inicial de 20 % dado el costo de su carrera y tambien las cuotas por pagar";

	std::cout << "\n \n El precio que ingrese tiene que ser segun la moneda del pais (Bolivares) \n \n";

	std::cout << " \n \n Ingrese el costo total de la carrera: ";
    std::cin >> N;
	calculo_cuota(N);
	
	return (0);
}