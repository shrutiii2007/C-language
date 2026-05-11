#include <stdio.h>
int main() {
    int n , rev = 0, rem;
    printf("Enter the any number:");
    scanf("%d",&n);

   while (n != 0) {
        rem = n % 10;       
        rev = rev * 10 + rem; 
        n = n / 10;         
    }

    printf("Reversed number: %d\n", rev);
    
    // output :- enter :- 123456789  in reverse :- 987654321 //
    return 0;
}
