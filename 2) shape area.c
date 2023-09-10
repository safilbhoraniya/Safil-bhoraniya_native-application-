#include <stdio.h>

int main() {
    int choice;
    printf("Choose a shape to find the area:\n");
    printf("1. Circle\n");
    printf("2. Rectangle\n");
    printf("3. Triangle\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1: {
            double radius, area;
            printf("Enter the radius of the circle: ");
            scanf("%lf", &radius);
            area = 3.14159265359 * pow(radius, 2);
            printf("Area of the circle: %lf\n", area
            
        }
        case 2: {
            double length, width, area;
            printf("Enter the length and width of the rectangle: ");
            scanf("%lf %lf", &length, &width);
            area = length * width;
            printf("Area of the rectangle: %lf\n", area);
            break;
        }
        case 3: {
            double base, height, area;
            printf("Enter the base and height of the triangle: ");
            scanf("%lf %lf", &base, &height);
            area = 0.5 * base * height;
            printf("Area of the triangle: %lf\n", area);
            break;
        }
        default:
            printf("Invalid choice\n");
            break;
    }

    return 0;
}
