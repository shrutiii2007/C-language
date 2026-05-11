// Online C compiler to run C program online
#include <stdio.h>

int main() {
  int arr[5],n,i,min;
  printf("enter the no :- ");
  scanf("%d",&n);
  for(i=0; i<n ; i++)
  {
      scanf("%d",&arr[i]);
  }
  
   min=arr[0];
  for(i=0; i<n ; i++)
  {
      if(arr[i]<min)
      {
          min=arr[i];
      }
      
  }
  
  printf("min of this numbers :- %d",min);
  
    return 0;
}
