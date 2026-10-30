#include <iomanip>
#include "Bank.h"
#include<clocale>

using namespace std;

int main() {
    setlocale(LC_ALL, "RUS");
    bank bank;
    bank.add(Account("Ivanov ", "4501 111111", 150000, 5.5, 30000, 10000));
    bank.add(Account("Petrov", "4501 222222", 80000, 3.2, 15000, 5000));
    bank.add(Account("Vanov", "4501 333333", 220000, 7.0, 50000, 20000));
    bank.add(Account("Rov", "4501 444444", 45000, 2.0, 10000, 3000));

    cout << "Bank" << endl;
    bank.printall();

    cout << "vsego deneg: " << bank.summ() << " p" << endl;

    double l = 4.0;
    cout << "derzhateli c procentom ne bolee " << l << "%" << endl;
    bank.printproc(l);

    cout << "peregruzka";

    cout << "index: " << bank[0].getname()
        << ", balanc = " << bank[0].getbal() << endl;

    Account m = bank[0] + bank[1];
    cout << "sum 1 i 2: " << m << endl;

    Account g = bank[2] * 1.10;
    cout << "bank[2] +10%: " << g << endl;

    Account copy;
    copy = bank[3];
    cout << "kopiya 3: " << copy << endl;

    return 0;
}