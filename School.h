#pragma once
#include<iostream>
#include<string>
#include<vector>
#include"Classroom.h"

using namespace std;

class School {
private:
	string schoolname;
	vector<Classroom*> classrooms;
public:
	School(const string& n);
	void addclass(Classroom* cl);
	void printsch() const;
};