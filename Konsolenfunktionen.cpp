#include "Konsolenfunktionen.h"
#include <iostream>
#include <string>
#include <sstream>
#include <stdexcept>


//------------------------------------------------------------------------------------------------------

void causgabe(double ergebnis)
{
	std::cout << ergebnis << '\n';
}

//------------------------------------------------------------------------------------------------------

void fehlermeldungAusgeben(const std::string& bezeichnung)
{
	std::cout << bezeichnung << " ist ungültig.\n";
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
			fehlermeldungAusgeben("Die Zahl");
			continue;
		}

		eingabeStrom >> std::ws;
		
		if (!eingabeStrom.eof())
		{
			fehlermeldungAusgeben("Die Zahl");
			continue;
		}
		return zahl;
	}
	
}

//------------------------------------------------------------------------------------------------------

char weiterRechnen()
{
	std::cout << "Wenn du weiter Rechnen möchtest schreibe ein j wenn nicht dann ein q.";

	while (true)
	{
		std::string fortfahren;
		std::getline(std::cin, fortfahren);
		if (fortfahren.length() != 1 || (fortfahren[0] != 'j' && fortfahren[0] != 'J' && fortfahren[0] != 'q' && fortfahren[0] != 'Q'))
		{
			fehlermeldungAusgeben("Das Zeichen");
			continue;
		}
		return fortfahren [0];
	}
}

//------------------------------------------------------------------------------------------------------------------

char operatorEinlesen()
{
	std::cout << "Welcher Operator?";
	
	while (true)
	{
		std::string operatorEingabe;
		std::getline(std::cin, operatorEingabe);

		if (operatorEingabe.length() != 1 || (operatorEingabe[0] != '+' && operatorEingabe[0] != '-' && operatorEingabe[0] != '*' && operatorEingabe[0] != '/'))
		{
			fehlermeldungAusgeben("Der Operator");
			continue;
		}
		return operatorEingabe[0];
	}
}