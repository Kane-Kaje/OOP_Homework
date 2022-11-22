#include <iostream>
using namespace std;



//Homework 2.1

void changeByReference(int& x, int& y) {
    int z;
    z = x;
    x = y;
    y = z;
}

void changeByAddress(int* x, int* y) {
    int z;
    z = *x;
    *x = *y;
    *y = z;
}


int main()
{
    int a = 10, b = 20;
    //afisam inainte de schimbare
    cout << "a=" << a << endl << "b=" << b << endl << endl;
    //le schimbam valoarea prin referinta
    changeByReference(a, b);
    cout << "a=" << a << endl << "b=" << b << endl << endl;
    //acum o facem inca o data folosind adresa
    changeByAddress(&a, &b);
    cout << "a=" << a << endl << "b=" << b << endl << endl;
}