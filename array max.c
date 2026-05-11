// Online C compiler to run C program online
#include <stdio.h>

int main() {
  int arr[5],n,i,max;
  printf("enter the no :- ");
  scanf("%d",&n);
  for(i=0; i<n ; i++)
  {
      scanf("%d",&arr[i]);
  }
  
   max=arr[0];
  for(i=0; i<n ; i++)
  {
      if(arr[i]>max)
      {
          max=arr[i];
      }
      
  }
  
  printf("max of this numbers :- %d",max);
  
    return 0;
}
