#include <stdio.h>
int main() {
    int n = 123, rev = 0, rem;

    rem = n % 10;         
    rev = rev * 10 + rem; 
    n = n / 10;           

    rem = n % 10;         
    rev = rev * 10 + rem; 
    n = n / 10;           

    rem = n % 10;         
    rev = rev * 10 + rem; 

    printf( "%d", rev);
    //output :- 3 2 1 //
    return 0;
}
