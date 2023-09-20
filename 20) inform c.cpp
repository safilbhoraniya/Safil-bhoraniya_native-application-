#include <stdio.h>

struct Employee {
    int empno;
    char empname[50];
    char address[100];
    int age;
}

void inputEmployee(struct Employee *emp) {
    printf("Enter Employee Number (empno): ");
    scanf("%d", &emp->empno);

    printf("Enter Employee Name (empname): ");
    scanf("%s", emp->empname);

    printf("Enter Employee Address: ");
    scanf(" %[^\n]", emp->address); 

    printf("Enter Employee Age: ");
    scanf("%d", &emp->age);
}

void displayEmployee(const struct Employee *emp) {
    printf("Employee Number (empno): %d\n", emp->empno);
    printf("Employee Name (empname): %s\n", emp->empname);
    printf("Employee Address: %s\n", emp->address);
    printf("Employee Age: %d\n", emp->age

