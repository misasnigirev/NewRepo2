#pragma once
#include<vector>
#include"Account.h"

using namespace std;


class bank {
private:
	vector<Account> acc;
public:
	bank();

	void add(const Account& a);
	int size() const;
	Account operator[](size_t i);
	const Account& operator[](size_t i) const;
	

	double summ() const;
	void printproc(double l)const;
	void printall()const;
};