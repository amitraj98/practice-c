// 2 Write a C program to find the sum of first 10 natural numbers. 
#include <stdio.h>

int main() {
    int n;
    int sum = 0;
    
    printf("sum of the 1st n natural number \n");
    for(int i=1; i<=10 ; i++){
       sum = sum+i;
        printf("%d+", i);
    }
    printf("\nthe sum of first 10 n natural no is %d", sum);
    
    return 0;
}