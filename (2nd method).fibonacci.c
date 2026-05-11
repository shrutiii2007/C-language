// Online C compiler to run C program online
#include <stdio.h>

int main() {
  int a=0,b=1,i=3,n=8,c;
  printf("%d\n",a);
  printf("%d\n",b);  
  while(i<=n){
      c=a+b;
      printf("%d\n",c);
      a=b;
      b=c;
      i++;
  }
    return 0;
}
