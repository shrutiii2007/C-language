// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int weeks;
   
   printf("enter weeks from no:- (1 to 7)");
   scanf("%d",&weeks);
   switch(weeks)
   {
   case 1:
     printf("monday");
     break;
   case 2:
     printf("tuesday");
     break;
   case 3:
     printf("wednesday");
     break;
   case 4:
     printf("thursday");
     break;
   case 5:
     printf("friday");
     break;
   case 6:
     printf("saturday");
     break;
   case 7:
     printf("sunday");
     break;
   default:
     printf("wrong number . (try enter number from (1-7))");
   }
    return 0;
}
