// 5. Write a C program to compute the perimeter and area of a rectangle with a height of 7 inches and width of 5 inches.
// Expected Output:
// Perimeter of the rectangle = 24 inches
// Area of the rectangle = 35 square inches

#include <stdio.h>
int main(){
    
    int n;
    int perimeter;
    int area;
    int l;
    int b;
    
    printf("the length of rectangle = ");
    scanf(" %d", &l);
    printf("the breadth of rectangle = ");
    scanf(" %d", &b);
    
    perimeter = (l+b)*2;
    printf("perimeter of a rectangle is %d", perimeter);
    
    area = l*b;
    printf("\narae of a rectangle is %d", area);
    
    return 0;
}