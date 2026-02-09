#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){
	int t,n;
	char s[101], format[10];
	char ss[101]={};
	scanf("%d", &t); getchar();
	for(int i=1; i<=t; i++){
		scanf("%d", &n); getchar();
		memset(ss, 0, sizeof(ss));
		sprintf(format, "%%%d[^\n]", n);
		scanf(format, s); getchar();
		
		int len = strlen(s);
		int k=0;
		for(int j=0; j<len; j++){
			if(s[j]>='a' &&s[j]<='z'){
				ss[k] = s[j];
				k++;
			}
		}
//		sprintf(format, "%%%ds", n);
		//atau bisa juga pake sprintf(<variable>, <"%%%ds>, <max_amount_in_variable>)
		//atau fgets(<variable>, <max_amount_in_variable, stdin); ini gaboleh di oj
//		int count = 0, countNew=0;
//		while(s[count]!='\0'){
//			if(isalpha(s[count])==true){
//				ss[countNew] = s[count];
//				countNew++;
//			}
//			count++;
//		}
//		ss[countNew] = '\0';
		
		
		//ATAU 
//		while(s[count]!='\0'){
//			
//			if(isalpha(s[count])==false){
//				
//				if(isalpha(s[count+1])==true){
//					s[count] = s[count+1];
//				} 
//				else if(s[count+1] =='\0'){
//					s[count]='\0';
//					break;
//				}
//			}
//			else s[count] = s[count];
//			count++;
//		}
		printf("Case #%d: %s\n",i, ss);
	}
}
