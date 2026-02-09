#include <stdio.h>

int main(void){
	float a, b;
	scanf("%f %f", &a, &b);
	printf("%.4f%%\n", (b/a)*100);
}
