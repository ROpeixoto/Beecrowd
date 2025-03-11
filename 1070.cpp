#include <stdio.h>

int main(){
	
int a;
int r=0;
scanf("%d", &a);

for(int i = a; r < 6; i++){

if(i%2 == 1){
printf("%d\n", i);
r++;
}

}
	return 0;
}
