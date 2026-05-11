// Online C compiler to run C program online
#include <stdio.h>

int main() {
   char a,b;
   
   printf("enter any two numbers :");
   scanf("%d%d",&a,&b);
   switch(a>b)
   {
   case 0:
   printf("%d is maximum",a);
   break;
   case 1:
   printf("%d is maximum",b);
   break;
  
   }
    return 0;
}
