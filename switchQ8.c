// Online C compiler to run C program online
#include <stdio.h>

int main() {
     char op;
    float a, b, result = 0.0f; 

printf("enter any two number to calculate :");
 scanf("%f %c %f", &a, &op, &b);

switch(op){
        case '+':
            result = a + b;
            printf("%.2f + %.2f = %.2f\n",a,b,result);
            break;
        case '-':
            result = a - b;
            printf("%.2f - %.2f = %.2f\n",a,b,result);
            break;
        case '*':
            result = a * b;
            printf("%.2f * %.2f = %.2f\n",a,b,result);
            break;
        case '/':
            result = a / b;
            printf("%.2f / %.2f = %.2f\n",a,b,result);
            
        default: 
            printf("Invalid operator");
            
          printf("%.2f %c %.2f = %.2f", a, op, b, result);
}
    return 0;
}
