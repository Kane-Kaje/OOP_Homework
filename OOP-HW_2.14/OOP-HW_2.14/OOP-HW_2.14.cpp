#include <iostream>
using namespace std;


double equation(double a, double b) {
    try {
        if (a != 0)
            return -b / a;
        else
            throw;
    }
    catch (...) {
        cout << "numarul sa fie diferit de 0";
    }
}



int main() {
    double x = 21.2, y = 39.42;
    cout << equation(x, y);

}