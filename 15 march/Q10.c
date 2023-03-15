// 10. Write a C program that accepts two integers from the user and calculates the product of the two integers. Go to the editor
// Test Data :
// Input the first integer: 25
// Input the second integer: 15
// Expected Output:
// Product of the above two integers = 375

#include <stdio.h>
int main(){
    
    int first;
    int second;
    int product;
    
    printf("enter the first number = ");
    scanf("%d", &first);
    printf("enter the second number = ");
    scanf("%d", &second);
    
    product=first*second;
    printf("product of two number is %d  ",product);
   
    return 0;
}