#include <iostream>
using namespace std;
class BankAccount {
protected:
    int accountNumber;
    double balance;

public:
    BankAccount(int accNum, double bal) : accountNumber(accNum), balance(bal) {}

    virtual void withdraw(double amount) = 0; 
    virtual void calculate_interest() = 0;    

    void displayInfo() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

class SavingsAccount : public BankAccount {
public:
    SavingsAccount(int accNum, double bal) : BankAccount(accNum, bal) {}

    void withdraw(double amount) override {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful. Remaining balance: " << balance << endl;
        } else {
            cout << "Insufficient funds!" << endl;
        }
    }

    void calculate_interest() {
        
        cout << "Interest calculated for savings account." << endl;
    }
};

class CheckingAccount : public BankAccount {
public:
    CheckingAccount(int accNum, double bal) : BankAccount(accNum, bal) {}

    void withdraw(double amount)  {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful. Remaining balance: " << balance << endl;
        } else {
           cout << "Insufficient funds!" << endl;
        }
    }

    void calculate_interest()  {
        
        cout << "No interest calculated for checking account." <<endl;
    }
};

int main() {
    
    SavingsAccount savings(12345, 1000);
    cout << "Savings Account:" << endl;
    savings.displayInfo();
    savings.withdraw(500);
    savings.calculate_interest();
    cout <<endl;

    CheckingAccount checking(54321, 2000);
    cout << "Checking Account:" << endl;
    checking.displayInfo();
    checking.withdraw(2500);
    checking.calculate_interest();

    return 0;
}

