#include <stdio.h>
#include <math.h>

int main(){
	
double a[3], delta, r1,r2, d2;

for (int i = 0; i<3;i++){
	scanf("%lf", &a[i]);
}

delta = pow(a[1], 2) - (4 * a[0] * a[2]);
d2 = delta;
r1 = ((a[1] * -1) + sqrt(delta)) / (2 * a[0]);
r2 = ((a[1] * -1) - sqrt(delta)) / (2 * a[0]);

if (d2 <= 0 || a[0] == 0){
	printf("Impossivel calcular\n");
	return 0;
}
else{
	printf("R1 = %.5lf\n", r1);
	printf("R2 = %.5lf\n", r2);
}


	return 0;
}
