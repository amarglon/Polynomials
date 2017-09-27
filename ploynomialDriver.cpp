#include <iostream>
#include "polynomial.h"

using namespace std;

int main(){

    Polynomial<int> poly(1, 2, 3);
    Polynomial<int> poly2(1, 2, 3);
    cout << "The sum of Polynomial 1 and x^2 + 2x + 3" << endl;
    cout << poly2.add(1, 2, 3)<< endl;
    cout << "The product of Polynomial 1 and x^2 + 2x + 3" << endl;
    cout << poly.multiply(1, 2, 3) << endl;

    return 0;
}
