#include <iostream>
using namespace std;
#include <math.h>
#include <iomanip>

struct student
{
    int nota;
    string nume;
};

int f(int x) {
    int size = 0;
    while (x != 0) {
        size++;
        x = x / 10;
    }
    return size;
}

int f(double x) {
    //   int size = 0, x1;
    //   x1 = x;
    //   x = x - int(x);         //nu am reusit sa gasesc o rezolvare pentru conversie
    //   while (x1 != 0) {
    //       size++;
    //       x1 = x1 / 10;
    //   }
    //   while (x != 0) {
    //       x = x * 10;
    //       size++;
    //       x = x - int(x);
    //   }

    int size = sizeof(x) / sizeof(double);
    return sizeof(size);
}

int f(student x) {
    int size = 0;
    while (x.nota != 0) {
        size++;
        x.nota = x.nota / 10;
    }
    return size = x.nume.size() + size;
}

int f(string x) {
    return x.size();
}


int main() {
    int x1 = 456; double x2 = 32.68;
    string x3 = "test";
    student x4;
    x4.nota = 14;
    x4.nume = "Eremya";
    cout << f(x1) << endl;
    cout << f(x2) << endl;
    cout << f(x3) << endl;
    cout << f(x4) << endl;
}