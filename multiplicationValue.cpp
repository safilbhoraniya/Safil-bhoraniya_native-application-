#include <iostream>
using namespace std;

    int multiplication(int a, int b) {
    return a * b;
}


    int cube(int x) {
    return x * x * x;
}

int main() {
    
    int num1, num2;
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    
    int Multiplication = multiplication(num1, num2);
    std::cout <<num1 << num2<< std::endl;

    
    int Cube = cube(num1);
    cout <<num1<<endl;

    return 0;
}
