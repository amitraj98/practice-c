// 11. Write a C program that accepts two item's weight and number of purchases (floating point values) and calculates their average value. 
// Test Data :
// Weight - Item1: 15
// No. of item1: 5
// Weight - Item2: 25
// No. of item2: 4
// Expected Output:
// Average Value = 19.444444

#include <stdio.h>
int main(){
    
    float average;
    double w1, w2;
    double n1, n2;
    
    printf("enter Weight of Item1 = ");
    scanf("%lf", &w1);
    printf("no of Item1 = ");
    scanf("%lf", &n1);
    printf("enter Weight of Item2 = ");
    scanf("%lf", &w2);
    printf("no of Item2 = ");
    scanf("%lf", &n2);
    
    average = ((n1*w1) + (n2*w2)) / (n1+n2);
    
    printf("average value = %f", average);
    
  
   
    return 0;
}