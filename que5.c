#include <stdio.h>

int main()
{
    //question 5//
    float length, width, area;
    
    printf("Enter length of rectangle: ");
    scanf("%f", &length);
    printf("Enter width of rectangle: ");
    scanf("%f", &width);
    
    area = length * width;
    
    printf("area of rectangle = %f\n", area);

    return 0;
}

