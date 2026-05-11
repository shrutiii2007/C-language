#include <stdio.h>

int main() {
    int i, j, count; 
    printf("Enter the no. to print: ");
    scanf("%d", &count); 

    for (i = 1; i <= count; ++i)
    {
  
        for (j = 5; j >= 1; --j)
        {
            printf("%d", j); 
        }
        printf("\n"); 
    }

    return 0;
}
