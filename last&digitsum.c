#include <stdio.h>

int main() {
    int n = 12345, sum = 0 , rem , first = 0;
    int a = n;
    rem = n % 10;
    
    while (a >= 10) {
        a /= 10;
    }
    
    first = a;
    sum = first + rem;

    printf("sum :- %d\n", sum);

    return 0;
    // output :- 12345 1+5 sum is 6//
}
