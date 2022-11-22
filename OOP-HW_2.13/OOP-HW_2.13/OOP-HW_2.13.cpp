#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>


struct Person {
    string name;
    int age;
};


int main() {
    Person person1, person2, person3, person4;
    person1.age = 24; person1.name = "Gigel";
    person2.age = 36; person2.name = "Stefan";
    person3.age = 68; person3.name = "Caraiman";
    person4.age = 16; person4.name = "Hero";

    vector<Person> hoomans{ person1,person2,person3,person4 };

    sort(hoomans.begin(), hoomans.end(),
        [](const Person& a, const Person& b) {
            return a.age > b.age; });

    for (auto x : hoomans) {
        cout << x.age << " ";
    }
}