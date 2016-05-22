#ifndef FRACTION_H
#define FRACTION_H

#include <string>

class Fraction
{
public:
	Fraction();
	Fraction(int num);
	Fraction(int num, int denom);
	int getNumerator();
	int getDenominator();
	void setNumerator(int num);
	void setDenominator(int denom);
	Fraction multiply(Fraction multiplier);
	void printFraction();
private:
	int numerator;
	int denominator;
};

#endif