#include<iostream>
#include"Teacher.h"
#include"Student.h"
#include"Classroom.h"
#include"School.h"

int main() {
	setlocale(LC_ALL, "RUS");

    Teacher* mathTeacher = new Teacher("Иванов Иван Иванович", "Математика");
    Teacher* physicsTeacher = new Teacher("Петрова Анна Сергеевна", "Физика");

    Student* s1 = new Student("Алексей", 101, "+7-900-111-22-33", mathTeacher);
    Student* s2 = new Student("Мария", 102, "+7-900-444-55-66", physicsTeacher);
    Student* s3 = new Student("Дмитрий",103, "+7-900-777-88-99", mathTeacher);
    Classroom* class9A = new Classroom("9А");
    class9A->addst(s1);
    class9A->addst(s2);

    Classroom* class10B = new Classroom("10Б");
    class10B->addst(s3);

    School* mySchool = new School("МБОУ СОШ №15");
    mySchool->addclass(class9A);
    mySchool->addclass(class10B);

    mySchool->printsch();
    return 0;
}