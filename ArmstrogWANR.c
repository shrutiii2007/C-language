#include <stdio.h>

void armstrong(int number) {
    int num, digit;
    int sum = 0;

    num = number;

    while (number != 0) {
        digit = number % 10;
        sum = sum + (digit * digit * digit);
        number = number / 10;
    }

    if (sum == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    armstrong(n);

    return 0;
}

