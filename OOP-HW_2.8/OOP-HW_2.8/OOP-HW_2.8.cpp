#include <iostream>
using namespace std;
#include <algorithm>


template <typename T>
T Max(T a, T b, T c) {
    return max({ a, b, c });
}


int main() {
    int x = 14, y = 6, z = 22;
    cout << Max(x, y, z);
}