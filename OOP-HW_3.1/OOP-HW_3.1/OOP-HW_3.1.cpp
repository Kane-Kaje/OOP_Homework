#include <iostream>
using namespace std;

class rectangle {
public:
	rectangle(int lenght, int height) {
		this->lenght = lenght;
		this->height = height;
	}
	int lenght;
	int height;

	int Perimeter() {
		return 2 * (lenght * height);
	}

	int Area() {
		return lenght * height;
	}
};



int main() {
	rectangle r1={10,5};
	cout << r1.Perimeter() << "\n";
	cout << r1.Area();


}