/*
a =1 =>  100
a =2 => 100 + 100 + 50
for(int i =0; i<a; i++){
damage = 100 + 50*i;
// a = 1, damage = 100 + 50*0 = 100
// a = 2, damage = (100 + 50*0) + (100 + 50*1) = 250
*/

#include <stdio.h>

int main(void){
	long long a, damage;
	scanf("%lld", &a);
	for(int i=0; i<a; i++){
		damage  += 100 + 50*i;
	}
	printf("%d\n", damage);
}
