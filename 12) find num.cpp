#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int sum = 0;

    printf("Table of odd numbers up to %d:\n", n);
    printf("Number\tSum\n");

    for (int i = 1; i <= n; i += 2) {
        sum += i;
        printf("%d\t%d\n", i, sum);
    }

    return 0;
}

