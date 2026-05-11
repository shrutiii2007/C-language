#include <stdio.h>
int main() {
    int a, b, c, i, num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    a = 0;
    b = 1;
    
    printf("Fibonacci series:\n");
    
    for(i = 1; i <= num; i++) {
        printf("%d ", a);
        
        a = b;
        b = c;
        c = a + b;
    }
    
    return 0;
}



//Fibonacci//
