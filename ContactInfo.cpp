#include"ContactInfo.h"

ContactInfo::ContactInfo(const string& t) :tel(t) {};
void ContactInfo::printinfo() const {
	cout << tel << endl;
};