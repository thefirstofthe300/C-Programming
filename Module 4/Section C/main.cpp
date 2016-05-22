/**
 * Name: Daniel Seymour
 * Assignment: Module 4, Section C
 * Term: December 2015
 * Course name: C++ Programming
 * Course number: COS-213-OL012
 * 
 * Develop the class Polynomial. The internal representation of a Polynomial is 
 * an array of terms. Each term contains a coefficient and an exponent. The 
 * term 2x^4 has the coefficient of 2 and the exponent 4. Develop a complete 
 * class containing proper constructor and destructor functions as well as set
 *  and get functions. The class should also provide the following overloaded 
 *  operator capabilities:
 *  
 *  Overload the addition operator (+) to add two Polynomials.
 *  Overload the subtraction operator (−) to subtract two Polynomials.
 *  
 *  Remember that when you submit this assignment, you should acknowledge to 
 *  your mentor that you have reviewed all programs using a C++ compiler.
 */

#include <iostream>
#include "Polynomial.h"

int main() {
    Polynomial test1;
    Polynomial test2;
    Polynomial test3;
    Polynomial test4;
    Polynomial addTest;
    Polynomial subTest;

    test1.setTerm(0, 4, 2);
    test1.setTerm(1, 4, 1);
    test1.setTerm(2, 1, 0);
    cout << test1.getPolynomial() << endl;
    test2.setTerm(0, 4, 2);
    test2.setTerm(1, 4, 1);
    test2.setTerm(2, 1, 0);
    cout << test2.getPolynomial() << endl;

    test3.setTerm(2, 1, 2);
    test3.setTerm(1, 4, 1);
    test3.setTerm(0, 4, 0);
    test4.setTerm(0, 1, 2);
    test4.setTerm(1, 4, 1);
    test4.setTerm(2, 4, 0);

    cout << test1.getTerm(0) << endl;;
    cout << test2.getTerm(0) << endl;

    addTest = test1 + test2;
    cout << addTest.getPolynomial() << endl;
    subTest = test3 + test4;
    cout << subTest.getPolynomial() << endl;
    return 0;
}
