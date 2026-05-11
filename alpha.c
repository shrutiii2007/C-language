#include <stdio.h>

int main() {
   char ch='1';
   if (ch>='A' && ch<='Z')
   {
       printf("UPPERCASE");
   }
   else if (ch>='a'&& ch<='z')
   {
       printf("LOWERCASE");
      
   }
   else 
   {
       printf("not a alphabate");
   }
   
   

    return 0;
}
