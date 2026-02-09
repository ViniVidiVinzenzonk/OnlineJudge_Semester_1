/* a, b
for int i = 0; i<3; i++
a = a+ a*b%

misal a = 1000, b = 100
a = 1000+1000 = 2000 bulan pertama
a = 2000 + 2000 = 4000 bulan kedua
a = 4000 + 4000 = 80000 bulan ketiga
*/

#include <stdio.h>
int main(void){
	double a, b;
	scanf("%lf %lf", &a, &b);
	for(int i =0; i<3; i++){
		a = a + a* (0.01*b);
	}
	printf("%.2lf", a);
}

