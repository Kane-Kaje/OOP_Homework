#include <iostream>
using namespace std;


struct Cat {
    string name;
    string master;
    int age;
};

struct Person {
    string name;
    int age;
};

struct Car {
    string producer;
    string licenseNumber;
    int    age;
};

template <typename T>
T Min(T x, T y, T z) {
    if (x.age > y.age && x.age > z.age) {
        return x;
    }
    else if (y.age > x.age && y.age > z.age)
    {
        return y;
    }
    return z;
}

int main() {
    Cat cat1;
    cat1.age = 8; cat1.master = "Gigel"; cat1.name = "Martzel";
    Person person1;
    person1.age = 24; person1.name = "Gigel";
    Car car1;
    car1.age = 6; car1.licenseNumber = "OT69420"; car1.producer = "Volvo";
    cout << Min(cat1, person1, car1).age; //nu putem compara folosind un template

}