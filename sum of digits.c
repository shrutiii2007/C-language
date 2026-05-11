#include <stdio.h>

int main() {
    int n = 456;
    int sum = 0;
    int rem;

    // First digit
    rem = n % 10;    
    sum = sum + rem; 
    n = n / 10;      

    // Second digit
    rem = n % 10;    
    sum = sum + rem; 
    n = n / 10;   

   
    sum = sum + n;   

    printf("The sum of the digits is: %d\n", sum);

    return 0;
}
