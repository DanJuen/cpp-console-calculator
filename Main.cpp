#include <iostream>
#include "Berechnungen.h"
#include "Konsolenfunktionen.h"
#include <stdexcept>
#include <limits>


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
	
	x = operatorEinlesen();

	while (true)
	{
		try
		{
			causgabe(operatorRechnet(a, b, x));
			break;
		}
		catch (const std::runtime_error& e)
		{
			std::cout << e.what();
			b = zahlEinlesen();
		}
	}

	k = weiterRechnen();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
}

//------------------------------------------------------------------------------------------------------------


