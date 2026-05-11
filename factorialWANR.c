#include <stdio.h>

void factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    printf("Factorial = %d", fact);
}

int main() {
    int num = 5;
    factorial(num);
    
    return 0;
}

