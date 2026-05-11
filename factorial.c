#include <stdio.h>

int main() {
    int n , i ,num=1;
    printf("Enter the any number:");
    scanf("%d",&n);

    if (n < 0)
        printf("Factorial doesn't exist.");
    else {
        for (i = 1; i <= n; ++i) {
            num *= i;
        }
        printf("Factorial of %d = %d", n, num);  
    }

    return 0;
}
