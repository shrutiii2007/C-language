// Online C compiler to run C program online
#include <stdio.h>

int main() {
  int arr[5],n,i,sum=0;
  printf("enter the no :- ");
  scanf("%d",&n);
  for(i=0; i<n ; i++)
  {
      scanf("%d",&arr[i]);
  }
  for(i=0; i<n ; i++)
  {
      sum+=arr[i];
  }
  printf("sum of this numbers :- %d",sum);
  
    return 0;
}
