#include <iostream>
using namespace std;


int f(float n, bool isRoundedTo100) {
    int rezultat, n1 = n;

    if (n1 % 100 >= 50 && isRoundedTo100 == true) {
        rezultat = n1 + (100 - n1 % 100);
        return rezultat;
    }
    else if (n1 % 100 < 50 && isRoundedTo100 == true) {
        rezultat = n1 - n1 % 100;
        return rezultat;
    }
    return round(n);
}

int main()
{
    float n = 1264.12;
    cout << f(n, true);
}
