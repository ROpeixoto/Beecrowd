#include <stdio.h>

int main(){
	
int a[5];
int r;

for(int i = 0; i < 5; i++){
scanf("%d", &a[i]);
}

for(int i = 0; i < 5; i++){
if(a[i] % 2 == 0){
	r++;
}

}
printf("%d valores pares\n", r);

	return 0;
}
