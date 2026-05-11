#include <stdio.h>
int main() {
    int n, num, rev = 0;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    num = n;
    
    while(n != 0) {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }
    
    if(rev == num)
        printf("Palindrome");
    else
        printf("Not Palindrome");
    
    return 0;
}          



//Palindrome//
