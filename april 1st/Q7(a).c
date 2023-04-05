// 7. Write a program in C to display the multiplication table take input as no of terms and print taple of any no.
#include <stdio.h>
void main()
 {
    int i,num,n;
    printf("Input number of terms : ");
    scanf("%d", &num);
    printf("multiplication table of :");
    scanf("%d", &n);
    for(i=1;i<=num;i++)
    {
   printf("%dX%d=%d \n", n,i,n*i);     
    }
 }

