#include <stdio.h>

int main() {
    long long int num;
    int maxDigit = -1; 

    printf("Enter a number: ");
    scanf("%lld", &num);

    // Take the absolute value of num to handle negative numbers
    num = llabs(num);

    while (num > 0) {
        int digit = num % 10;
        if (digit > maxDigit) {
            maxDigit = digit;
        }
        num = num / 10;
    }

    if (maxDigit == -1) {
        printf("No digits found.\n");
    } else {
        printf("The maximum digit in the number is: %d\n", maxDigit);
    }

    return 0;
}

