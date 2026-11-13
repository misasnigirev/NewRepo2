#pragma once
#include<iostream>
#include<string>
#include<vector>
#include"Teacher.h"
#include"ContactInfo.h"

using namespace std;


class Student {
private:
   string name;
    int id;
    vector<int> ball;
    ContactInfo info; 
    Teacher* teacher; 

public:
    Student(const string& n, int i,
        const string& t, Teacher* tea);

    void addball(int grade);
    string getname() const;
    void printst() const;
};