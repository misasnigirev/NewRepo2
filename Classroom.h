#pragma once
#include<iostream>
#include<string>
#include<vector>
#include"Student.h"
using namespace std;

class Classroom {
private:
	string classname;
	vector<Student*> students;
public:
	Classroom(const string& n);
	void addst(Student* st);
	void printclass();
};