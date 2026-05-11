#include <stdio.h>

void area( float length, float width) {
   float area;
    area = length * width;
    printf("area=%f", area);
}

int main() {
     float length = 10, width= 20;
    area( length,width);
   

    return 0;
}
