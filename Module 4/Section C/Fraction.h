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
	Fraction multiply();
	string printFraction();
	~Fraction();
private:
	int numerator;
	int denominator;
};