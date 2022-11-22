#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

class Student {
public:
	Student(string name, int grade) {
		this->name = name;
		this->grade = grade;
	}
	int grade;
	string name;
};

class StudentsList{
public:
	vector<Student*> studentList;
	void addStudent(Student* x) {
		this->studentList.push_back(x);
	}


	void sortStudents() {
		sort(this->studentList.begin(), this->studentList.end(),
			[](Student* a,Student* b){
			return a->grade > b->grade; });
	}

};

int main() {
	Student s1("ionu", 5),s2("Vlady", 10), s3("Creste", 8), s4("Radu", 2), s5("Preotu", 7);
	StudentsList List;
	List.addStudent(&s1);
	List.addStudent(&s2);
	List.addStudent(&s3);
	List.addStudent(&s4);
	List.addStudent(&s5);
	
	List.sortStudents();

	for (auto x : List.studentList) {
		cout << x->grade << " ";
	}
	
}