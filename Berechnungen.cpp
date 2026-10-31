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
		throw std::runtime_error("Division durch Null");

	}
	return d / e;
}