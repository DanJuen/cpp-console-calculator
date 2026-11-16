#include <iostream>
#include "Konsolenfunktionen.h"
#include <stdexcept>


int main()
{
	char fortfahren = 'j';
	char derOperator;
	while (fortfahren != 'q' && fortfahren != 'Q')
	{
	double ersteZahl;
	double zweiteZahl;
	

	std::cout << "Erste Zahl:";
	ersteZahl = zahlEinlesen();

	std::cout << "Zweite Zahl:";
	zweiteZahl = zahlEinlesen();
	
	derOperator = operatorEinlesen();

	while (true)
	{
		try
		{
			causgabe(operatorRechnet(ersteZahl, zweiteZahl, derOperator));
			break;
		}
		catch (const std::runtime_error& e)
		{
			std::cout << e.what();
			zweiteZahl = zahlEinlesen();
		}
	}

	fortfahren = weiterRechnen();
	}
}

//------------------------------------------------------------------------------------------------------------


