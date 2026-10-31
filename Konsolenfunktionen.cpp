#include "Konsolenfunktionen.h"
#include <iostream>
#include <limits>
#include "Berechnungen.h"


//------------------------------------------------------------------------------------------------------

void causgabe(double ergebnis)
{
	std::cout << ergebnis;
}

//------------------------------------------------------------------------------------------------------

double zahlEinlesen()
{
	double a;
	std::cin >> a;
	while (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Gebe eine gültige Zahl ein.";
		std::cin >> a;
	}
	return a;
}

//------------------------------------------------------------------------------------------------------

char weiterRechnen()
{
	char k;
	std::cout << "Wenn du weiter Rechnen möchtest schreibe ein j wenn nicht dann ein q.";
	std::cin >> k;

	while (k != 'j' && k != 'q' && k != 'Q')
	{
		std::cout << "Das war keine gültige Eingabe.";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Weiterrechnen?";
		std::cin >> k;
	}
	return k;
}

//------------------------------------------------------------------------------------------------------

double operatorRechnet(double a, double b, char x)
{
		switch (x)
		{
		case '+':
			return addieren(a, b);
		case '-':
			return subtrahieren(a, b);
		case '*':
			return multiplizieren(a, b);
		case '/':
			return dividieren(a, b);
		default:
			std::cerr << "Fehler aufgetreten!\n";
		}
}

//------------------------------------------------------------------------------------------------------------------

char operatorEinlesen()
{
	std::cout << "Welcher Operator?";
	char x;
	std::cin >> x;

	while (x != '+' && x != '-' && x != '*' && x != '/') 
	{
		std::cout << "Ungültiger Operator!\n";
		std::cout << "Bitte gültigen Operator eingeben\n";
		std::cin >> x;
	}
	return x;
}