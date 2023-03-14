// 4. Write a C program to print the following characters in reverse. Go to the editor
// Test Characters: 'X', 'M', 'L'
// Expected Output:
// The reverse of XML is LMX

#include <stdio.h>
int main(){
    
    char c1 = 'X';
    char c2 = 'M';
    char c3 = 'L' ;
    
    
    printf("the reverse of %c%c%c is %c%c%c", c1,c2,c3, c3,c2,c1);
    
    return 0;
}