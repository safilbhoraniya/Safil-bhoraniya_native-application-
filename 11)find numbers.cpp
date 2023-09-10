#include <stdio.h>

int main() {
    int numbers[10];
    int sum = 0;

    printf("Enter 10 numbers, one at a time:\n");
    for (int i = 0; i < 10; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

    printf("The sum of the 10 numbers is: %d\n", sum);

    return 0;
}

