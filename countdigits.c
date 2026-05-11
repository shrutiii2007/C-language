#include <stdio.h>

int main()
{
    int num;
    int count = 0;
   
    printf("Enter number: ");
    scanf("%d", &num);
    do
    {
        count++;
        num /= 10;
    } while(num > 0);

    printf("Total digits: %d", count);

          //output :- enter any number :- 1 2 3 4 5 number of digits :- 5//
    return 0;
}
