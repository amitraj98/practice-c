//Example of nested while loop
#include <stdio.h>  
    int main()  {  
       int rows;  // variable declaration  
       int columns; // variable declaration  
       int k=1; // variable initialization  
       printf("Enter the number of rows :");  
       scanf("%d",&rows);  
       printf("\nEnter the number of columns :"); 
       scanf("%d",&columns);  
       
          int a[rows][columns]; //2d array declaration  
          int i=1;  
       while(i<=rows) // outer loop  
       {  
           int j=1;  
          while(j<=columns)  // inner loop  
           {  
               printf("%d\t",k);  // printing the value of k.  
               k++;  j++;    // increment counter   
           }  
           i++;  
           printf("\n");  
       }  
    }  
