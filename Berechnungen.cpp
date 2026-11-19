#include "Berechnungen.h"
#include <stdexcept>

double addieren(double d, double e)
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
	if (e == 0)
	{
		throw std::runtime_error("Division durch Null.");

	}
	return d / e;
}

//------------------------------------------------------------------------------------------------------------------------

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
		throw std::invalid_argument("Falscher Operator!");
	}
}