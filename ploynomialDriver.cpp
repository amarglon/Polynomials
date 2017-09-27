#include <iostream>
#include "polynomial.h"

using namespace std;

int main(){
    Polynomial<int> poly(1, 2, 3);
    Polynomial<int> poly2(3, 2, 1);
    cout << "Hello world!" << endl;
    cout << poly.getA()<< endl;
    cout << poly.multiply(1, 1, 1) << endl;

    return 0;
}
