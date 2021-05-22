// Daniela Cedeño C.I.:29.538.813 // 

#include <iostream>
#include <string.h>

using namespace std;

class Forma
{
private:
	int menudeopciones[2];
public:
	float Coordenada;
	string Nombre, Color; 
	void Imprimir()
	{

		cout << "\n\nNOMBRE: " << Nombre << "\n\nCOLOR: " << Color << "\nCOORDENADAS: " << Coordenada << "\n\n";
	}
	void AsignacionDeColor()
	{
		system("CLS"); menudeopciones[0] = 0;
		cout << "\nColor Actual " << Color;
		cout << "\n\n\tRealizará el cambio de color?\n\n\t1 - Si\n\t2 - No\n";
		cin >> menudeopciones[0];
		if (menudeopciones[0] == 1)
		{
			cout << "\nEscriba el nuevo color que tendra la forma ";
			cin >> Color;
		}
	}

	void Mover()
	{
		system("CLS"); menudeopciones[1] = 0;
		if (Coordenada == 0) cout << "\nDefina el valor de la siguiente variable:\n\n";
		cout << "\nCoordenada Actual es: " << Coordenada;
		cout << "\n\nQuiere cambiar la coordenada actual de la forma?\n\n\t1 - Si \n\t2 - No\n";
		cin >> menudeopciones[1];
		if (menudeopciones[1] == 1)
		{
			cout << "\nEscriba el valor de la nueva coordenada de la forma: ";
			cin >> Coordenada;
		}
	}

};
class Cuadrado : Rectangulo { };
class Rectangulo :Forma
{
private:
	int menudeopciones[4];
public:
	float LadoMenor, LadoMayor, Area, Perimetro, Escala, EscalaConsulta, rLadoMenor, rLadoMayor;
	void AsignarLadoMenor()
	{
		system("CLS"); menudeopciones[0] = 0;
		if (LadoMenor == 0) cout << "\n\tDefina la siguiente variable:\n\n";
		cout << "\n\tEl valor actual del lado menor del rectangulo es: " << LadoMenor;
		cout << "\n\nQuiere cambiar el valor actual del lado menor del rectangulo?\n\n1 - Si\n2 - No\n";
		cin >> menudeopciones[0];
		if (menudeopciones[0] == 1)
		{
			cout << "\nEscriba el nuevo valor que tendra el lado menor del rectangulo: ";
			cin >> LadoMenor;
			rLadoMenor = LadoMenor;
		}
	}
	void AsignarLadoMayor()
	{
		system("CLS"); menudeopciones[1] = 0;
		if (LadoMayor == 0) cout << "\nDefina la siguiente variable:\n\n";
		cout << "\nEl valor actual del lado mayor del rectangulo es: " << LadoMayor;
		cout << "\n\nQuiere cambiar el valor actual del lado mayor del rectangulo??\n\n1 - Si\n2 - No\n";
		cin >> menudeopciones[1];
		if (menudeopciones[1] == 1)
		{
			cout << "\n\tEscriba el nuevo valor que tendra el lado menor del rectangulo: ";
			cin >> LadoMayor;
			rLadoMayor = LadoMayor;
		}
	}
	void AsignarEscala()
	{
		system("CLS"); menudeopciones[2] = 0;
		if (Escala == 0) cout << "\n\tDefina la siguiente variable:\n\n";
		cout << "\nEl valor actual de la escala del rectangulo es:" << Escala;
		cout << "\n\n\tQuiere cambiar el valor actual de la escala del rectangulo??\n\n\t1 - SI\n\t2 - NO\n";
		cin >> menudeopciones[2];
		if (menudeopciones[2] == 1)
		{
			cout << "\nEscriba el nuevo valor que tendra la escala del rectangulo: ";
			cout << "\n2 o 0.5: ";
			cin >> EscalaConsulta;
			if (EscalaConsulta == 2 or EscalaConsulta == 0.5) Escala = EscalaConsulta;
			else
			{
				cout << "\n\n\tDebe escribir un valor que sea entre: 0.5 o 2\n\n";
				system("PAUSE");
			}
		}
	}
	void ImprimirRectangulo()
	{
		
		cout << "Lado Mayor: " << rLadoMayor << "\nLado Menor: " << rLadoMenor << "\n";
		cout << "\n\tEscala del Rectangulo: " << Escala << "\n";
		LadoMayor = rLadoMayor; LadoMenor = rLadoMenor;
		if (Escala == 0.5) { LadoMayor = LadoMayor / 2; LadoMenor = LadoMenor / 2; }
		else if (Escala == 2) { LadoMayor = LadoMayor * 2; LadoMenor = LadoMenor * 2; }
		
		cout << "Lado Mayor con Escala: " << LadoMayor << "\nLado Menor con Escala: " << LadoMenor << "\n";
		Area = LadoMenor * LadoMayor;
		cout << "Area del rectangulo es: " << Area;
		Perimetro = (2 * LadoMenor) + (2 * LadoMayor);
		cout << "\nPerimetro del rectangulo es: " << Perimetro;
	}

};

main()
{
	int menu[2], s = 1;
	Forma obj1;
	Rectangulo obj2;

	obj1.Coordenada = 0;
	obj1.Color = "Rosado";
	obj1.Nombre = "null";

	obj2.LadoMayor = 0;
	obj2.LadoMenor = 0;
	obj2.Escala = 0;

	while (s == 1)
	{
		system("CLS"); menu[0] = 0; menu[1] = 0; menu[2] = 0;
		if (obj1.Coordenada == 0) { cout << "\nPRIMERO DEBE DEFINIR LAS VARIABLES DE LA FORMA"; }
		cout << "\n\nELIGA UNA DE LAS SIGUIENTES OPCIONES PARA CONTINUAR: \n\n1 - DEFINIR FORMA\n2 - DEFINIR RECTANGULO\n3 - SALIR\n";
		cin >> menu[0];
		if (menu[0] == 1)
		{
			system("CLS");
			if (obj1.Coordenada == 0) menu[1] = 2;
			else
			{
				cout << "\n\n\n[ DEFINIR LA FORMA ]\n\n";
				cout << "Debe elegir entre las siguientes opciones para continuar: \n\n1 - Obtener / Cambiar de Color \n2 - Mover el Centro de la Forma\n3 - Imprimir forma\n4 - Volver\n";
				cin >> menu[1];
			}

			if (menu[1] == 1) obj1.AsignacionDeColor();
			else if (menu[1] == 2) obj1.Mover();
			else if (menu[1] == 3)
			{
				system("CLS");
				obj1.Imprimir();

				system("PAUSE");
			}
			else if (menu[1] == 4) { menu[0] = 0; }
			else  cout << "\n\nPor favor elija entre las opciones de la lista\n\n"; system("PAUSE");
		}

		else if (menu[0] == 2)
		{
			if (obj2.LadoMayor == 0) menu[2] = 1;
			else if (obj2.LadoMenor == 0) menu[2] = 2;
			else if (obj2.Escala == 0) menu[2] = 3;
			else
			{
				cout << "[ DEFINIR EL RECTANGULO ]";
				cout << "Debe elegir entre las siguientes opciones para continuar: \n1 - Cambiar el valor del lado mayor al rectangulo\n2 - Cambiar el valor del lado menor al rectangulo \n3 - Cambiar el valor de la escala al rectangulo \n4 - Imprimir el rectangulo \n5 - Volver\n\t";
				cin >> menu[2];
			}
			
			if (menu[2] == 1) obj2.AsignarLadoMayor();
			else if (menu[2] == 2) obj2.AsignarLadoMenor();
			else if (menu[2] == 3) obj2.AsignarEscala();
			else if (menu[2] == 4)
			{
				if (obj1.Coordenada == 0) obj1.Mover();
				else
				{
					system("CLS");
					cout << "\n\n[ RECTANGULO ]";
					obj1.Imprimir();
					obj2.ImprimirRectangulo();
					system("PAUSE");
				}
			}
			else if (menu[2] == 5) { menu[0] = 0; }
			else { system("CLS"); cout << "\n\n\tPor favor elija entre las opciones de la lista\n\n"; system("PAUSE"); }
		}
		else if (menu[0] == 3) // Salir
		{
			system("CLS");
			cout << "\n\n\tDesea salir del programa?\n\n\t1 - No\n\t2 - Si\n";
			cin >> s;
			if (s != 1) s = 0;
		}
		else  cout << "\n\nOpcion no disponible en la lista\n\n"; system("PAUSE");
	}
	system("PAUSE");

}

