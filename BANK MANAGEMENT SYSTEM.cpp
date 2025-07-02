#include <iostream>
using namespace std;

class AccountHolder {
protected:
    string name;

public:
    int setName(string n) {
        name = n;
        return 1; 
    }

    string getName() {
        return name;
    }

    AccountHolder(string n = "") {
        name = n;
    }
};
class BankAccount : public AccountHolder {
private:
    int accountNumber;
    double balance;

public:
    BankAccount(string n, int acctNum, double bal)
        : AccountHolder(n) {
        accountNumber = acctNum;
        balance = bal;
    }

    int getAccountNumber() {
        return accountNumber;
    }

    double getBalance() {
        return balance;
    }
};

class SavingsAccount : public BankAccount {
private:
    double interestRate;

public:
    SavingsAccount(string n, int acctNum, double bal, double rate)
        : BankAccount(n, acctNum, bal) {
        interestRate = rate;
    }

    double getInterestRate() {
        return interestRate;
    }
};

int main() {
    BankAccount ba("MEGAN", 11111, 3000.50);
    cout << "Bank Account:\n";
    cout << "Name: " << ba.getName() << "\n";
    cout << "Account Number: " << ba.getAccountNumber() << "\n";
    cout << "Balance: " << ba.getBalance() << "\n\n";

    SavingsAccount sa("TREVOR", 22222, 6000.75, 2.5);
    cout << "Savings Account:\n";
    cout << "Name: " << sa.getName() << "\n";
    cout << "Account Number: " << sa.getAccountNumber() << "\n";
    cout << "Balance: " << sa.getBalance() << "\n";
    cout << "Interest Rate: " << sa.getInterestRate() << "\n";

    return 0;
}