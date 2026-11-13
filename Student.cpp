#include"Student.h"

Student::Student(const string& n, int i,
    const string& t, Teacher* tea): name(n), id(i),info(t), teacher(tea) {}

void Student::addball(int grade) {
    ball.push_back(grade);
}

string Student::getname() const {
    return name;
}

void Student::printst() const {
    cout << "ID: " << id << "  Студент: " << name << endl;
    cout << "  Контакты: ";
    info.printinfo();
    cout << endl;

    if (teacher != nullptr) {
       cout << "  ";
        teacher->printteacher();
        cout << endl;
    }

    cout << "  Оценки: ";
    if (ball.empty()) cout << "нет";
    for (int g : ball) cout << g << " ";
    cout << endl;
}