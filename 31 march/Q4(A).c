// 4.(A) Write a program in C to read N numbers from keyboard and find their sum and average.  
#include <stdio.h>

int main() {
    int i , num, n;
    int sum = 0;
    float avg = 0;
    
    printf("take numbers from keyboard = ");
    scanf("%d", &num);
    printf("\nThe first %d natural numbers are:\n",num);
    
    for(int i=1; i<=num ; i++){
        printf("number %d = ", i);
        scanf("%d", &n);
       sum = sum+n;
    }
    printf("\nthe sum of n no is %d", sum);
    avg = sum / n;
    printf("\nthe avg of n no is %f", avg);
    return 0;
}