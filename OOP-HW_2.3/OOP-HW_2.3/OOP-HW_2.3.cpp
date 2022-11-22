#include <iostream>
using namespace std;


struct Student {
    string name;
    int grade;
};

Student Max(Student s1, Student s2) {
    if (s1.grade > s2.grade)
        return s1;
    else if (s2.grade > s1.grade)
        return s2;

}

int main() {
    Student s1, s2, s3;
    s1.name = "Stefan";  s1.grade = 15;
    s2.name = "Marinel"; s2.grade = 67;
    s3.name = "Cristi"; s3.grade = 98;
    cout << Max(s1, s2).name;
}