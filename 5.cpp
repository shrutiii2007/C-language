#include <stdio.h>

int main() {
    int i, j;
    int num = 5; 

    for (i = num; i >= 1; --i) {
        
        for (j = i; j <= num; ++j) {
            printf("%d", j);
        }
        printf("\n"); 
    }

    return 0;
}
