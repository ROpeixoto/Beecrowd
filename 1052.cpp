#include <stdio.h>

int main(){
	int n;
enum meses{January, February, March, April, May, June, July, August, September, October, November, December};
	scanf("%d", &n);
	if (n==1){
		printf("January");
	}if (n==2){
		printf("February");
	}if (n==3){
		printf("March");
	}if (n==4){
		printf("April");
	}if (n==5){
		printf("May");
	}if (n==6){
		printf("June");
	}if (n==7){
		printf("July");
	}if (n==8){
		printf("August");
	}if (n==9){
		printf("September");
	}if (n==10){
		printf("October");
	}if (n==11){
		printf("November");
	}if (n==12){
		printf("December");
	}
	printf("\n");
	return 0;
}
