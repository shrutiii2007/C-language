#include <stdio.h>
int main() {
    int n = 12345, sum = 0, rem, first;

    rem = n % 10;       // 5
    first = n / 10000;  // 1
    sum = first + rem;  // 1 + 5

    printf("sum=%d", sum);  // 6

    return 0;
}
