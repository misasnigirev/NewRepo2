#include "Teacher.h"
#include <iostream>

Teacher::Teacher(const string& n, const string& p)
    : name(n), predmet(p) {
}

string Teacher::getname() const { return name; }
string Teacher::getpr() const { return predmet; }

void Teacher::printteacher() const {
    cout << "Учитель: " << name << " Предмет: " << predmet << endl;
}