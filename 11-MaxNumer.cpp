#include <iostream>
using namespace std;

class maxnumber {
private:
    int num1, num2;

public:
    maxnumber(int a, int b) : num1(a), num2(b) {}

    
    friend int findMax(maxnumber& n);
};


int findMax(maxnumber& n) {
    return (n.num1>n.num2) ;
    n.num1; 
    n.num2;
}

int main() {
    int num1, num2;

    cout<<"Enter two numbers: ";
    cin>>num1>>num2;

    maxnumber n(num1, num2);

    int maxNumber = findMax(n);

    cout << "The maximum number is: "<<maxNumber<<endl;

    return 0;
}
