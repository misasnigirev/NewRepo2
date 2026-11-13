#include "School.h"
#include <iostream>

School::School(const string& n) : schoolname(n) {}

void School::addclass(Classroom* cr) {
    classrooms.push_back(cr);
}

void School::printsch() const {
   
    cout << "школа: " << schoolname << endl;
    for (const auto& cr : classrooms) {
        cr->printclass();
    }
}