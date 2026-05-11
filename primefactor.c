#include <stdio.h>

int main() {
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n <= 1) { 
        printf("not defined than or equal to 1.\n");
    }
    printf("Prime factors of %d are: ", n);
    
    for (int i = 2; n > 1; i++) {
        while (n % i == 0) {
            printf("%d ", i);
            n = n / i;
        }
    }
   
    return 0;
}


