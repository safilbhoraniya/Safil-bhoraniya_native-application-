#include <iostream>
using namespace std;



inline double multiply(double a, double b) {
    return a * b;
}

inline double cube(double a) {
    return a * a * a;
}

int main() {
    double num1, num2;

    
    cout<<"Enter two numbers: ";
    cin>>num1;
    cin>>num2;

    
    double result_multiply = multiply(num1, num2);
    std::cout << "Multiplication result: " << result_multiply << std::endl;

    
    double result_cube = cube(num1);
    cout<<"Cube of the first number: ";
    cout<<result_cube;
     cout<<endl;

    return 0;
}

