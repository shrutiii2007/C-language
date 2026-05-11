// Online C compiler to run C program online
#include <stdio.h>

int main() {
   char a;
   
   printf("enter any two numbers :");
   scanf("%d",&a);
   switch(a % 2)
   {
   case 0:
   printf("number even");
   break;
   case 1:
   printf("number odd");
   break;
  
   }
    return 0;
}
