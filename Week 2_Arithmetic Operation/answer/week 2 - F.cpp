/*
a = 2
b = 4 *(1/2) = 2
c = 6 *(1/2) = 3
d = 4 *(1/4) = 1
*/
#include <stdio.h>

int main(void){
	float a[3], b[3], c[3], d[3];
	for(int i =0; i<3; i++){
		scanf("%f %f %f %f",&a[i], &b[i], &c[i], &d[i]);
	}
	
	for(int i=0; i<3; i++){
		printf("%.2f\n", 2*(a[i]+b[i]+c[i]) + d[i]);
	}
//	scanf("%f %f %f %f",&a, &b, &c, &d);
//	printf("%.2f\n", 2*(a+b)+ 3*c + d);
}
