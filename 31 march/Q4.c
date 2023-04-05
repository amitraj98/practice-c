 // 4. Write a program in C to read 10 numbers from keyboard and find their sum and average. 
#include <stdio.h>
int main()
{
    int i, n;
    int sum;
    float avg;
    
    printf("read 10 numbers from keyboard\n");
    for(i=1; i<=10; i++){
        printf("number %d = ",i);
        scanf("%d",&n);
       sum = sum + n;
     
   }
     printf("\nsum of 10 number is = %d", sum);
     avg = sum/10;
     printf("\nthe for 10 number is %f", avg);
 
   return 0;
}