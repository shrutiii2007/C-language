#include <stdio.h>

int main()
{
    //question 4//
    float length, width, perimeter;
    
    printf("Enter length of rectangle: ");
    scanf("%f", &length);
    printf("Enter width of rectangle: ");
    scanf("%f", &width);
    
    perimeter = 2 * (length + width);
     printf("Perimeter of rectangle = %f  ", perimeter);

    return 0;
}
