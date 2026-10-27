#include <iostream>
#include <limits>
#include "Berechnungen.h"
#include "Konsolenfunktionen.h"


int main()
{
	char k = 'j';
	char x;
	while (k != 'q' && k != 'Q')
	{
	double a;
	double b;
	

	std::cout << "Erste Zahl:";
	a = zahlEinlesen();

	std::cout << "Zweite Zahl:";
	b = zahlEinlesen();
	
	std::cout << "Welcher Operator?";
	std::cin >> x;

	causgabe(operatorRechnet(a, b, x));
	

	k = weiterRechnen();
	}
}

//------------------------------------------------------------------------------------------------------------


