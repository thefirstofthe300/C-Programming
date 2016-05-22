#include <iostream>
#include <string>
#include "Fraction.h"

using namespace std;

Fraction::Fraction(){};
Fraction::Fraction(int num) : numerator(num){};
Fraction::Fraction(int num, int denom) : numerator(num), denominator(denom){};

int Fraction::getNumerator()
{
	return numerator;
};
int Fraction::getDenominator()
{
	return denominator;
};
void Fraction::setNumerator(int num)
{
	numerator = num;
};
void Fraction::setDenominator(int denom)
{
	denominator = denom;
};
Fraction Fraction::multiply(Fraction mulitplier)
{
	int newNum = (numerator * mulitplier.getNumerator());
	int newDenom = (denominator * mulitplier.getDenominator());
	Fraction outFraction(newNum, newDenom);
	return outFraction;
};
void Fraction::printFraction()
{
	cout << numerator << "/" << denominator;
};