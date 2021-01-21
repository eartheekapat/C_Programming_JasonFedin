#include <stdlib.h>
#include <stdio.h>

struct employee {
    char name[20];
    int hireDate;
    float salary;
};

int main () {
    struct employee emp_1 = {.name = "Monica", .hireDate = 8, .salary = 99.9};
    
    struct employee emp_2;

    printf("Please input a second employee's name : ");
    scanf("%s", emp_2.name);
    printf("Please input a second employee's hire date : ");
    scanf("%d", &emp_2.hireDate);
    printf("Please input a second employee's salary : ");
    scanf("%f", &emp_2.salary);

    printf("emp_1 name is %s with hireDate %d and salary %f\n", emp_1.name, emp_1.hireDate, emp_1.salary);
    printf("emp_2 name is %s with hireDate %d and salary %f\n", emp_2.name, emp_2.hireDate, emp_2.salary);
}