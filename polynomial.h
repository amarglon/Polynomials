#include <iostream>

using namespace std;

template <class T>
class Polynomial{
    T a, b, c;
    public:
        Polynomial(T degreeTwo, T degreeOne, T degreeZero){
            a = degreeTwo;
            b = degreeOne;
            c = degreeZero;
    }
    T add(T coefOne, T coeftwo, T coefthree);
    T multiply(T coefOne, T coefTwo, T coefThree);
    T getA();
    T getB();
    T getC();
};

template <class T>
T Polynomial<T>::add(T coefOne, T coefTwo, T coefThree){
    std::cout<< "adding polynomials..."<< endl;
    a += coefOne;
    b += coefTwo;
    c += coefThree;
    std::cout<< "The new Polynomial is: "<< endl;
    std::cout<< a <<"x^2 + " << b << "x + " << c << endl;
}
template <class T>
T Polynomial<T>::multiply(T coefOne, T coefTwo, T coefThree){
//Some code here
}
template <class T>
T Polynomial<T>::getA(){
    return a;
}
template <class T>
T Polynomial<T>::getB(){
    return b;
}
template <class T>
T Polynomial<T>::getC(){
    return c;
}

