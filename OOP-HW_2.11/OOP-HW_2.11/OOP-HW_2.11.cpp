#include <iostream>
using namespace std;





int substruction(int x, int y) {
    return x - y;
}

int addition(int x, int y) {
    return x + y;
}

int main() {
    int nr1, nr2;
    char OPcharacter;
    cout << "nr1 = "; cin >> nr1;
    cout << "operation character = "; cin >> OPcharacter;
    cout << "nr2 = "; cin >> nr2;
    if (OPcharacter == '+')
        cout << addition(nr1, nr2);
    else if (OPcharacter == '-')
        cout << substruction(nr1, nr2);
    else
        cout << "not an addition/subruction";

}