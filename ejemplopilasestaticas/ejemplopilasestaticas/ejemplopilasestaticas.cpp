#include <iostream>
#include "Pila.h"
#include "TipoDato.h"
#include <string>

int main()
{
	int N, cod;
	string desc;
	Pila pilita;
	TipoDato tipito;
	cout << "Ingresar el numero de elementos:";
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cout << "Ingresar el codigo del producto:";
		cin >> cod;
		cout << "Ingresar la descripcion del producto:";
		cin >> desc;
		tipito.set_dato(cod, desc);
		pilita.Apilar(tipito);
	}
	pilita.VerPila();
	

}