#include <stdio.h>

int main() {
    int choice;
    double years, days;

    printf("Choose conversion:\n");
    printf("1. Years to Days\n");
    printf("2. Days to Years\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter the number of years: ");
        scanf("%lf", &years);
        days = years * 365.25; // Assuming a year has 365.25 days on average
        printf("%.2lf years is approximately %.2lf days.\n", years, days);
    } else if (choice == 2) {
        printf("Enter the number of days: ");
        scanf("%lf", &days);
        years = days / 365.25; // Assuming a year has 365.25 days on average
        printf("%.2lf days is approximately %.2lf years.\n", days, years);
    } else {
        printf("Invalid choice. Please enter 1 or 2.\n");
    }

    return 0;
}

