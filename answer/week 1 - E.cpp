#include <stdio.h>

int main(){
	char kelas, N[12], M[101];
	int number;
	
	scanf("%s\n", &N);
	scanf("%[^\n]\n", M); 
	scanf("%c %d", &kelas, &number);
	
	printf("Id    : %s\n", N);
	printf("Name  : %s\n", M);
	printf("Class : %c\n", kelas);
	printf("Num   : %d\n", number);
	return 0;
}
