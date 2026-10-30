#include "bank.h"
#include <iomanip>
#include <iostream>

using b= bank;


b::bank() {}
void b::add(const Account& a) {
	acc.push_back(a);
}
int b::size() const { return acc.size(); }
Account b::operator[](size_t i) {
	return acc[i]; 
}
const Account& b::operator[](size_t i) const { return acc[i]; }
double b::summ() const{
	double s = 0;
	for (const auto& a : acc) {
		s += a.getbal();
		return s;
	}
}

void b::printproc(double l) const {
    for (const auto& a : acc)
        if (a <= l)
            cout << a << endl;
}

void b::printall() const {
    cout << left << setw(18) << "name"
        << setw(14) << "pasport"
        << setw(10) << "balance"
        << setw(10) << "procent"
        << setw(10) << "polozheno"
        << setw(10) << "cnyato" << endl;
    for (const auto& a : acc)
        cout << a << endl;
}