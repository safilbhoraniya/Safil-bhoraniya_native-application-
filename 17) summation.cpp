#include <iostream>
using namespace std;

int main() {
    long long int num, sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    // Take the absolute value of num to handle negative numbers
    num = abs(num);

    while (num > 0) {
        int digit = num % 10;
        sum += digit;
        num = num / 10;
    }

    // Negate the sum
    sum = -sum;

    cout << "The summation of the digits is: " << sum << endl;

    return 0;
}

