#include <iostream>
using namespace std;
#include <math.h>

struct nrComplex {
    double a;
    double b;
};


double module(double x) {
    return abs(x);
}


double module(nrComplex x) {
    return sqrt(x.a * x.a + x.b * x.b);
}
int main() {
    nrComplex x1;
    x1.a = 34; x1.b = 567;
    double  x2 = -48.54;
    cout << module(x2) << endl;
    cout << module(x1);
}