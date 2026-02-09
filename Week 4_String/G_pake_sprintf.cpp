#include <stdio.h>
#include <string.h>

int main(void){
	//pake sprint
	int t, n; 
	char s[101], ss[101]={};
	char format[10];
	
	scanf("%d", &t); getchar();
	
	for(int i=1; i<=t; i++){
		scanf("%d", &n); getchar();
		sprintf(format, "%%%d[^\n]", n);
		memset(ss, 0, sizeof(ss));//katanya disuruh coba bersihin dulu isi arraynya
		scanf(format, s); getchar();
		
		int k=0;
		for(int j=0; j<n; j++){
			if(s[j]>='a'&&s[j]<='z'){
				ss[k] = s[j];
				k++;
//				printf("%c", ss[k-1]);
			}
		}
		ss[-1] ='\0';
		printf("Case #%d: %s\n", i, ss);
		}
	return 0;
}
