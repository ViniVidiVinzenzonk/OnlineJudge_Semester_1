#include <stdio.h>
#include <string.h>

int main(void){
	int t, n;
	long long k;
	char word[101], format[10];
	scanf("%d", &t); getchar();
	
	for(int i =1; i<=t; i++){
		
		scanf("%d %lld", &n, &k); getchar();
		sprintf(format, "%%%d[^\n]", n);  //ato ga bisa juga kita gapake n nya, jadi langusng "%100[^\n]"
		scanf(format, word); getchar();
		
		printf("Case #%d: ", i);
		int len = strlen(word);
		for(int j=0; j<len; j++){//kita kerjainnya kata per kata
//			word[j] = (int)word[j] - 97; //karena ascii nya a itu 97, jadi dikurang 97
			int plus = ((int)word[j]-97 + k)%26 +97;
			
//			while(plus>25){
//				plus-=26; ini bisa diganti mod 26
//			}
			
//			plus += 97; //karena tadi diminus 97
			printf("%c", (char)plus);
		}
		printf("\n");
	}
//	char a;
//	scanf("%c", &a); getchar();
//	a= (int)a - 97;
	return 0;
}
