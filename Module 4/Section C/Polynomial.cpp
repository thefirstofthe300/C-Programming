#include <iostream>
#include <string>
#include "Polynomial.h"

using namespace std;

Polynomial::Polynomial(){};
Polynomial::~Polynomial(){};

Polynomial Polynomial::operator+(Polynomial& addPoly) {
    Polynomial outPoly;
    int tempCoeffient;
    int tempPower;
    for (int i = 0; i < MAX_D1; i++) {
    	for (int j = 0; j < MAX_D1; j++) {
        	if (poly[i][1] == addPoly.getPower(j)) {
            	tempCoeffient = poly[i][0] + addPoly.getCoefficient(j);
            	outPoly.setTerm(i, tempCoeffient, poly[i][1]);
            }
        }
    }
    return outPoly;
}

Polynomial Polynomial::operator-(Polynomial& subPoly) {
    Polynomial outPoly;
    int tempCoeffient;
    int tempPower;
    for (int i = 0; i < MAX_D1; i++) {
        for (int j = 0; i < MAX_D1; i++) {
            if (poly[i][1] == subPoly.getPower(j)) {
                tempCoeffient = poly[i][0] - subPoly.getCoefficient(j);
                outPoly.setTerm(i, tempCoeffient, poly[i][1]);
            }
        }
    }
    return outPoly;
}

int Polynomial::getCoefficient(int termnum) {
    return poly[termnum][0];
}

int Polynomial::getPower(int termnum) {
    return poly[termnum][1];
}

string Polynomial::getPolynomial() {
    string finalPoly;
    for (int i = 0; i < MAX_D1; i++) {
        if (i == 0) {
            finalPoly = to_string(poly[i][0]) + "x^" + to_string(poly[i][1]);
        } else {
            finalPoly = finalPoly + " + " + to_string(poly[i][0]) + "x^" + to_string(poly[i][1]);
        }
    }
    return finalPoly;
}

string Polynomial::getTerm(int term) {
    string finalTerm;
    finalTerm = to_string(poly[term][0]) + "x^" + to_string(poly[term][1]);
    return finalTerm;
}

void Polynomial::setPolynomial(int numTerms) {
    int coefficient;
    int power;
    for (int i = 0; i < numTerms; i++) {
        cout << "Please enter the coefficient of term " << i + 1;
        cin >> coefficient;
        cout << "Please enter the power of term " << i + 1;
        cin >> power;
        poly[i][0] = coefficient;
        poly[i][1] = power;
    }
}

void Polynomial::setTerm(int termNum) {
    int coefficient;
    int power;
    cout << "Please enter the coefficient of the term " << termNum + 1;
    cin >> coefficient;
    cout << "Please enter the power of the term " << termNum + 1;
    cin >> power;
    poly[termNum - 1][0] = coefficient;
    poly[termNum - 1][0] = power;
}

void Polynomial::setTerm(int termNum, int coefficient, int power){
    poly[termNum][0] = coefficient;
    poly[termNum][1] = power;
}
