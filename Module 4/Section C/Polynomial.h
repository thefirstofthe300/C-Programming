#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H4
#define MAX_D1 3
#define MAX_D2 2

#include <string>

using namespace std;

class Polynomial {
    public:
        Polynomial();
        ~Polynomial();
        Polynomial operator+(Polynomial& addPoly);
        Polynomial operator-(Polynomial& subPoly);
        int getCoefficient(int termnum);
        int getPower(int termnum);
        string getPolynomial();
        string getTerm(int term);
        void setPolynomial(int numTerms);
        void setTerm(int termNum);
        void setTerm(int termNum, int coefficient, int power);
    private:
        int poly[MAX_D1][MAX_D2];
};

#endif  // POLYNOMIAL_H
