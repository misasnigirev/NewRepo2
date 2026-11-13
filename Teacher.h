#pragma once
#include<iostream>
#include<string>

using namespace std;

class Teacher {
private:
   string name;
   string predmet;

public:
    Teacher(const string& n, const string& p);
    string getname() const;
    string getpr() const;
    void printteacher() const;
};