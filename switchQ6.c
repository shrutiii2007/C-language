// Online C compiler to run C program online
#include <stdio.h>

int main() {
   char a;
   
   printf("enter any numbers :");
   scanf("%d",&a);
   switch(a>0)
   {
   case 1:
   printf("%d is positive",a);
   break;
   case 0:
      switch(a<0)
   {
   case 1:
   printf("%d is negative",a);
   break; 
   case 0:
   printf("%d is zero",a);
   break;
   }
   
  
   }
    return 0;
}
