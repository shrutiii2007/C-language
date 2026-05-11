// Online C compiler to run C program online
#include <stdio.h>

int main() {
    float hra,da,gross,basic;
    printf("enter the salary :");
    scanf("%f",&basic);
    
  if(basic <= 10000)
    {
        da  = basic * 0.8;
        hra = basic * 0.2;
    }
    else if(basic <= 20000)
    {
        da  = basic * 0.9;
        hra = basic * 0.25;
    }
    else
    {
        da  = basic * 0.95;
        hra = basic * 0.3;
    }

    gross = da+hra+basic;
    
    printf("gross salary of person :  = %.2f",gross);
    
    return 0;
}
