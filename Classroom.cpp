#include"Classroom.h"
using c = Classroom;

c::Classroom(const string& n):classname(n){}

void c::addst(Student* st) {
	students.push_back(st);
}
void c::printclass() {
	cout << "class: " << classname << endl;
	for (const auto& student : students) {
		student->printst();
		cout << endl;
	}
}