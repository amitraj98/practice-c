// 6. Write a C program to compute the perimeter and area of a circle with a given radius.
// Expected Output:
// Perimeter of the Circle = 37.680000 inches
// Area of the Circle = 113.040001 square inches

#include <stdio.h>
int main(){
    
    float area;
    float perimeter;
    float radius;
    
    printf("enter the radius of a circle = ");
    scanf(" %f", &radius);
    
    perimeter = 2*3.14*radius;
    printf("perimeter of a circle is %f", perimeter);
    
    area = 3.14*radius*radius;
    printf("\narae of a circle is %f", area);
    
    return 0;
}