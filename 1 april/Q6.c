// 6. Write a program in C to display the multiplication table of a given integer.
#include <stdio.h>
void main()
 {
    int i,num;
    printf("Input number of terms : ");
    scanf("%d", &num);
    printf("multiplication table of %d is \n");
    for(i=1;i<=10;i++)
    {
    printf("%dX%d=%d \n", num,i,num*i);     
    }
 }

