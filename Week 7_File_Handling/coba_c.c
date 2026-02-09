#include <stdio.h>
#include <string.h>

int main(void){
	int i, j, t, n, k;
	char s[105];
	
	scanf("%d", &t);
	
	for(i=0; i<t; i++){
		scanf("%s", s);
		int len = strlen(s);	
		
		scanf("%d", &n);
		int berubah[105] = {0};
		
		for(j=0; j<n; j++){
			char a[5] = {0};
			char b[5] = {0};
			scanf("%s %s", a, b);
			
			for(k=0; k<len; k++){
				if(s[k]==a[0] && berubah[k]==0){
					s[k] = b[0];
					berubah[k] = 1;
				}
			}
		}
		
		int count[26] = {0};
		for(k=0; k<len; k++){
			if(s[k]>='A' && s[k]<='Z'){
				count[s[k]-'A']++;
			}
		}
		
		for(k=0; k<26; k++){
			if(count[k]!=0){
				printf("%c %d\n", k+'A', count[k]);
			}
		}				
	}
	return 0;
}
