// 9. Write a C program that accepts two integers from the user and calculates the sum of the two integers. Go to the editor
// Test Data :
// Input the first integer: 25
// Input the second integer: 38
// Expected Output:
// Sum of the above two integers = 63

#include <stdio.h>
int main(){
    
    int first;
    int second;
    int sum;
    
    printf("enter the first number = ");
    scanf("%d", &first);
    printf("enter the second number = ");
    scanf("%d", &second);
    
    sum=first+second;
    printf("sum of two number is %d  ", sum);
   
    return 0;
}