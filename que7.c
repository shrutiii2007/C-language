#include <stdio.h>

int main() {
    float centimeters, meters, kilometers;

    printf("Enter length in centimeters: ");
    scanf("%f", &centimeters);

    meters = centimeters / 100.0;
   
    kilometers = centimeters / 100000.0;

    printf("Length in meters: %f m\n", meters);
    printf("Length in kilometers: %f km\n", kilometers);

    return 0;
}
