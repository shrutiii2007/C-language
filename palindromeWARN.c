#include <stdio.h>

void checkPali(int n) {
    int rev = 0, num = n;

    while(n != 0) {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }

    if(rev == num)
        printf("%d is Palindrome\n", num);
    else
        printf("%d is Not Palindrome\n", num);
}

int main() {
    int a = 121;  
    checkPali(a);
    
    return 0;
}

