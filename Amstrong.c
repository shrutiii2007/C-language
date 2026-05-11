#include <stdio.h>

int main() {
    int a, originalnum, rem;
    int result = 0;


    printf("Enter a number: ");
    scanf("%d", &a);

    originalnum = a;

    while (a != 0) {
        rem = a % 10;     
        result = result + (rem * rem * rem); 
        a = a / 10;           
    }
 
    if (result == originalnum)
        printf("%d is armstrong.\n", originalnum);
    else
        printf("%d is not Armstrong .\n", originalnum);

    return 0;
}

