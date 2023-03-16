// 12. Write a C program that accepts an employee's ID, total worked hours in a month and the amount he received per hour. Print the ID and salary (with two decimal places) of the employee for a particular month. 
// Test Data :
// Input the Employees ID(Max. 10 chars): 0342
// Input the working hrs: 8
// Salary amount/hr: 15000
// Expected Output:
// Employees ID = 0342
// Salary = U$ 120000.00

#include <stdio.h>
int main(){
    
    char id[10];
    double salary;
    int hour;
    
    printf("Input the Employees ID = ");
    scanf("%s", &id);
    printf("Input the working hours = ");
    scanf("%d", &hour);
    printf("Input the salary amount = ");
    scanf("%lf", &salary);
   
   printf("Employees ID = %s", id);
   printf("\nSalary = US $%.2lf", hour*salary);
   
    return 0;
}