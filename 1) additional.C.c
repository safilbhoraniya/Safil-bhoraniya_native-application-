#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    // Input
    printf("Enter an operator (+, -, *, /, %%): ");
    scanf("%c", &operator);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Perform calculations
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2lf\n", result);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        case '%':
            if (num2 != 0) {
                result = (int)num1 % (int)num2;
                printf("Result: %.0lf\n", result);
            } else {
                printf("Error: Modulo by zero\n");
            }
            break;
        default:
            printf("Error: Invalid operator\n");
    }

    return 0;
}
