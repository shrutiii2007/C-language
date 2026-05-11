// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
   int physics,chemistry,biology,mathematics,computer;
   float per;
   
   printf("enter marks of each subject:");
   
   scanf("%d%d%d%d%d",&physics,&chemistry,&biology,&mathematics,&computer);
   
per=(physics + chemistry + biology + mathematics + computer)/5.0;

printf("percentage = %.2f\n", per);

if(per>=90)
{
    printf("Grade A");
}

else if(per>=80)
{
   printf("Grade B"); 
}

else if(per>=70)
{
   printf("Grade C"); 
}
else if(per>=60)
{
   printf("Grade D"); 
}
else if(per>=40)
{
   printf("Grade E"); 
}
else
{
   printf("Grade F"); 
}
    return 0;
}
