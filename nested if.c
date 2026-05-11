#include <stdio.h>
int main(){
	int x,y;
	printf("Enter The x value:");
	scanf("%d",&x);
	printf("Enter The y value:");
	scanf("%d",&y);
	if (x==0){
		if (y==0){
			printf("HORIZON");
		}
		else{
			printf("y-axis");
		}
		}else {
        if (y == 0) {
            printf("X-axis");
        } else {
            printf("Plane");
        }
    }
		
	
		return 0;
			
		
}
