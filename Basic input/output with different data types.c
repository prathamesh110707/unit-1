/* Unit 1 - Program 1: Basic input/output with different data types */
#include <stdio.h>

int main() {
    int age;
    float height;
    double salary;
    char grade;
    char name[50];

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age (integer): ");
    scanf("%d", &age);

    printf("Enter your height in feet (float): ");
    scanf("%f", &height);

    printf("Enter your salary (double): ");
    scanf("%lf", &salary);

    printf("Enter your grade (character): ");
    scanf(" %c", &grade);   // space before %c skips the leftover newline

    printf("\n----- Output -----\n");
    printf("Name   : %s\n", name);
    printf("Age    : %d\n", age);
    printf("Height : %.2f\n", height);
    printf("Salary : %.2lf\n", salary);
    printf("Grade  : %c\n", grade);

    return 0;
}
