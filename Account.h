#pragma once
#include <iostream>
#include <string>

using namespace std;
class Account {
private:
	string name;
	string pasport;
	double balance;
	double procent;
	double polozheno;
	double snyato;
public:
	Account();
	Account(const string& n, const string& p, double b, double pr, double pol, double s);
	Account(const Account& o);


	string getname()const;
	string getpasport()const;
	double getbal()const;
	double getproc()const;
	double getpoloz()const;
	double getsn()const;


	void setname(const string& n);
	void setpasport(const string& p);
	void setbal(double b);
	void setproc(double p);
	void setpoloz(double p);
	void setsn(double s);

	double plusproc() const;

	Account& operator=(const Account& o);

	bool operator<=(double r) const;
	bool operator==(const Account& o) const;
	bool operator!=(const Account& o) const;

	Account operator+(const Account& o) const;
	Account operator*(double k) const;

	friend std::ostream& operator<<(std::ostream& os, const Account& a);
	friend std::istream& operator>>(std::istream& is, Account& a);
};