#include <iostream>
using namespace std;



template <typename T>
T Sum(T a, T b) {
    return a + b;
}

int main() {
    double x = 14.32, y = 22.11;
    cout << Sum(x, y);
}
//the Sum works for int,long,float,double,etc..