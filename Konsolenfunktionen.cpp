#include "Konsolenfunktionen.h"
#include <iostream>
#include <limits>
#include "Berechnungen.h"
#include <string>
#include <sstream>


//------------------------------------------------------------------------------------------------------

void causgabe(double ergebnis)
{
	std::cout << ergebnis;
}

//------------------------------------------------------------------------------------------------------

double zahlEinlesen()
{
	while (true)
	{
		std::string eingabe;
		std::getline(std::cin, eingabe);
		std::istringstream eingabeStrom(eingabe);
		double zahl;
		eingabeStrom >> zahl;
		if (eingabeStrom.fail())
		{
			std::cout << "Gebe eine gültige Zahl ein.";
			continue;
		}

		eingabeStrom >> std::ws;
		
		if (!eingabeStrom.eof())
		{
			std::cout << "Gebe eine gültige Zahl ein.";
			continue;
		}
		return zahl;
	}
	
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
			return -0.0;
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