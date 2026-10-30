#include "Account.h"
#include <iomanip>

using namespace std;
using a = Account;

a::Account()
    : name(""), pasport(""), balance(0), procent(0), polozheno(0),snyato(0) {
}

a::Account(const string& f, const string& p,
    double b, double r, double dep, double w): name(f), pasport(p), balance(b), procent(r), polozheno(dep),snyato(w) {
}

a::Account(const Account& o){
    name = o.name;
    pasport = o.pasport;
    balance = o.balance;
    procent = o.procent;
    polozheno = o.polozheno;
    snyato = o.snyato;
}

string a::getname() const { return name; }
string a::getpasport() const { return pasport; }
double a::getbal() const { return balance; }
double a::getproc() const { return procent; }
double a::getpoloz() const { return polozheno; }
double a::getsn() const { return snyato; }

void a::setname(const string& n) { name = n; }
void a::setpasport(const string& v) { pasport = v; }
void a::setbal(double v) { balance = v; }
void a::setproc(double v) { procent= v; }
void a::setpoloz(double v) { polozheno = v; }
void a::setsn(double v) { snyato = v; }

double a::plusproc() const {
    return balance * procent / 100.0;
}

Account& a::operator=(const Account& o) {
    if (this != &o) {
        name = o.name;
        pasport = o.pasport;
        balance = o.balance;
        procent = o.procent;
        polozheno = o.polozheno;
        snyato = o.snyato;
    }
    return *this;
}

bool a::operator<=(double r) const { return procent <= r; }
bool a::operator==(const Account& o) const { return balance == o.balance; }
bool a::operator!=(const Account& o) const { return !(*this == o); }

Account a::operator+(const Account& o) const {
    return Account(name, pasport, balance + o.balance, procent,
       polozheno + o.polozheno, snyato + o.snyato);
}

Account Account::operator*(double k) const {
    return Account(name, pasport, balance * k, procent, polozheno, snyato);
}


ostream& operator<<(ostream& os, const Account& a) {
    os << setw(18) << a.name << setw(14) << a.pasport << setw(10) << a.balance << setw(7) << a.procent << setw(10) << a.polozheno << setw(10) << a.snyato;
    return os;
}

istream& operator>>(istream& is, Account& a) {
    is >> a.name >> a.pasport >> a.balance >> a.procent >> a.polozheno >> a.snyato;
    return is;
}