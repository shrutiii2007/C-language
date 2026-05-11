// Online C compiler to run C program online
#include <stdio.h>

int main() {
  int arr[5],n,i,even,odd;
  printf("enter the no :- ");
  scanf("%d",&n);
  for(i=0; i<n ; i++)
  {
      scanf("%d",&arr[i]);
  }
  
   even=0;
   odd=0;
   
  for(i=0; i<n ; i++)
  {
      if(arr[i]%2==0)
      {
         even++;
      }
      else{
          odd++;
      }
      
  }
  
  printf("even of this numbers :- %d\n",even);
   printf("odd of this numbers :- %d\n",odd);
  
    return 0;
}
