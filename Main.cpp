#include <iostream>
#include <limits>

double addieren(double d, double e);
double subtrahieren(double d, double e);
double multiplizieren(double d, double e);
double dividieren(double d, double e);
void causgabe(double c);
double operatorRechnet(double a, double b, char x);
double zahlEinlesen();
char weiterRechnen();

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
//-------------------------------------------------------------------------------------------------------- functions for calculations
    double addieren(double d,double e)
	{
		return d + e;
	}
	double subtrahieren(double d, double e)
	{
		return d - e;
	}
	double multiplizieren(double d, double e)
	{
		return d * e;
	}
	double dividieren(double d, double e)
	{
		return d / e;
	}

//--------------------------------------------------------------------------------------------------------
	void causgabe(double ergebnis)
	{
		std::cout << ergebnis;
	}
//---------------------------------------------------------------------------------------------------------
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
	// std::string << "Gebe keine 0 ein.";
//------------------------------------------------------------------------------------------------------------

	double operatorRechnet(double a, double b, char x)
	{
		while (true)
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
				if (b == 0)
				{
					while (b == 0)
					{
						std::cout << "Gib eine Zahl außer 0 ein.";
						b = zahlEinlesen();
					}
				}
				return dividieren(a, b);
			default:

				std::cout << "Ungültiger Operator!!!!!\n";
				std::cout << "Bitte gültigen Operator eingeben\n";
				std::cin >> x;
			}
		}
	}

//------------------------------------------------------------------------------------------------------------------

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