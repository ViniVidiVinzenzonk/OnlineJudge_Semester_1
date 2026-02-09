#include <stdio.h>
int main(){
	char nama[101];
	scanf("%[^\n]", nama);
	getchar();// input 1 character -> kita pake buat nangep \n dari scanf //biar ngestop read 
	printf("Congrats \"%s\" for joining the CS department at BINUS.\n", nama);
	
	return 0;
}
