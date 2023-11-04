#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string depositor_name;
    string account_number;
    string account_type;
    double balance;

public:
    
    BankAccount(string name,string accountNum,string type, double initialBalance = 0) {
        depositor_name = name;
        account_number = accountNum;
        account_type = type;
        balance = initialBalance;
    }

    
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout<<"Deposited ";
            cout<<amount;
            cout<<" into ";
            cout<<depositor_name;
            cout<< "'s account.";
            cout<< std::endl;
        } else {
            std::cout << "Invalid amount";
            cout<< std::endl;
        }
    }

    
    void withdraw(double amount) {
        if (amount > 0 && balance >= amount) {
            balance -= amount;
            cout << "Withdrew ";
            cout<< amount;
            cout<< " from ";
            cout<<depositor_name;
            cout<< "'s account.";
            cout<<endl;
        } else if (amount <= 0) {
            cout << "Invalid withdrawal amount." ;
            cout<<endl;
        } else {
            cout << "Insufficient balance. Withdrawal not allowed.";
             cout<<endl;
        }
    }

    // Function to display name and balance
    void displayInfo() {
        cout << "Depositor Name: " << depositor_name <<endl;
        cout << "Account Number: " << account_number <<endl;
        cout << "Account Type: " << account_type <<endl;
        cout << "Balance: " << balance <<endl;
    }
};

int main() {
    BankAccount account1("savi rutvi", "123456789", "Savings", 1000);
    account1.displayInfo();

    account1.deposit(1000);
    account1.displayInfo();

    account1.withdraw(500);
    account1.displayInfo();

    return 0;
}
