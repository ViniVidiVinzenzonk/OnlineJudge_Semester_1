#include <stdio.h>
#include <string.h>

void printChar(char *word){
	if(*word == '\0') return; //jangan apa apa dulu sebelum nyampe array paling dalem
	printChar(word+1);
	printf("%c", word[0]);
}

int main(void){
	int t;
	scanf("%d", &t); getchar();
	
	for(int i=0; i<t; i++){
		char word[1000];
		scanf("%[^\n]", word); getchar();
		printf("Case #%d: ", i+1);
		printChar(word);
		printf("\n");
	}
	
	//ini bukan recursive, tapi looping
	/*int x;
	char a[1001];
	scanf("%d", &x); getchar();
	
	for(int i = 0; i<x; i++){
		scanf("%[^\n]", a); getchar();
		printf("Case #%d: ",i+1);
		//why a variable won't print?
		for(int j=strlen(a) - 1; j>=0; j--){
			printf("%c", a[j]);
		} //why this code won't print a backwards? udah bisa
		printf("\n");
	}
	*/
	return 0;
}
