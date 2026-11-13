#pragma once
#include<iostream>
#include<string>
using namespace std;
class ContactInfo {
private:
	string tel;
public:
	ContactInfo(const string& t);
	void printinfo() const;
};