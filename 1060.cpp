#include <stdio.h>

int main(){
	
float a[6];
int r;
for(int i = 0; i < 6; i++){
scanf("%f", &a[i]);
}
for(int i = 0; i < 6; i++){
if(a[i] > 0){
	r++;
}
}
printf("%d valores positivos\n", r);

	return 0;
}
