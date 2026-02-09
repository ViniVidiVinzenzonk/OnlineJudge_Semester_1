#include <stdio.h>
#include <string.h>
int main(void){
	int t, counter=1;
	char x[501];
	scanf("%d", &t); getchar();
	
	for(int i=0; i<t; i++){
		scanf("%[^\n]", x); getchar();
		
		int len=strlen(x);
		bool tanda= false;
		for(int i=0; i<=len; i++){
			if(x[i] !=x[len-i-1]){
				tanda = true;
			}
		}
		
		if(tanda==true){
			printf("Case #%d: Nah, it's not a palindrome\n", i+1);
		}
		else printf("Case #%d: Yay, it's a palindrome\n", i+1);
	 }
	
	return 0;
}
