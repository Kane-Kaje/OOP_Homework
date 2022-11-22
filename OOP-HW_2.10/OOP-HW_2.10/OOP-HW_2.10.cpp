#include <iostream>
using namespace std;



template <typename T>
void interchange(T& a, T& b) {
    T x;
    x = a; a = b; b = x;
}

int main() {
    int x = 7, y = 21;
    cout << "x=" << x << endl << "y=" << y << "\n\n";     //afisam inainte de schimbare
    interchange(x, y);
    cout << "x=" << x << endl << "y=" << y;               //afisam dupa schimbare
}