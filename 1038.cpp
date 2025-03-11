#include <stdio.h>

int main(){
	
	float x, y, r;
	
	scanf("%f %f", &x, &y);
	
	if(x == 1){
		r = 4 * y;
		printf("Total: R$ %.2f", r);
	}
	else if(x == 2){
		r = 4.5 * y;
		printf("Total: R$ %.2f", r);
	}
	else if(x == 3){
		r = 5 * y;
		printf("Total: R$ %.2f", r);
	}
	else if(x == 4){
		r = 2 * y;
		printf("Total: R$ %.2f", r);
	}
	else if(x == 5){
		r = 1.5 * y;
		printf("Total: R$ %.2f", r);
	}
	return 0;
}
