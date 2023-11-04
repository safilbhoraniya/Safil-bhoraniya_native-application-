#include <iostream>
using namespace std;

class NumberSwap {
private:
    int num1, num2;

public:
    NumberSwap(int a, int b) : num1(a), num2(b) {

    }
    friend void swapNumbers(NumberSwap& n);

    void displayNumbers() {
        cout<<"Number 1:"<<num1<<endl;
        cout<<"Number 2:"<<num2<<endl;
    }
};
void swapNumbers(NumberSwap& n) {
    n.num1 = n.num1 + n.num2;
    n.num2 = n.num1 - n.num2;
    n.num1 = n.num1 - n.num2;
}

int main() {
    int num1, num2;

    cout <<"Enter a numbers:";
    cin>>num1;
    cin>>num2;

    NumberSwap ns(num1, num2);

    cout<<"Before swapping:" <<endl;
    ns.displayNumbers();

    swapNumbers(ns);

    ns.displayNumbers();

    return 0;
}
