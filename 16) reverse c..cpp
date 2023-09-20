#include <stdio.h>

int main() {
    long long int num, reversed = 0;

    printf("Enter a number: ");
    scanf("%lld", &num);

    while (num != 0) {
        int remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num = num / 10;
    }

    printf("The number in reverse order is: %lld\n", reversed);

    return 0;
}

