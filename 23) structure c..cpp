#include <stdio.h>

struct Student {
    int roll_no;
    char name[50];
    float marks;
};

union Money {
    int dollars;
    float euros;
};

int main() {
    
    struct Student student1;
    student1.roll_no = 101;
    strcpy(student1.name, "John");
    student1.marks = 85.5;

    union Money money1;
    money1.dollars = 100;
    
    printf("Student: Roll No - %d, Name - %s, Marks - %.2f\n", student1.roll_no, student1.name, student1.marks);
    printf("Money: Dollars - %d, Euros - %.2f\n", money1.dollars, money1.euros);

    return 0;
}

