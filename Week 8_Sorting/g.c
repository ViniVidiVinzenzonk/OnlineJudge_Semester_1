//Order String - Prob G
#include <stdio.h>
#include <string.h>

char S[10000005];
int count[256]; //to store counter by ASCII;

int main(void){
	scanf("%s", S); getchar();
	int i;
	for(i=0; S[i]!='\0'; i++){
		count[ S[i] ]++; //dia ngesave pake indexing ascii
	}
	
	for(i=0; i<26; i++){
		char upper = 'A'+i; // buat nge-akses arraynya pake indexing abc secara ascii (97++)
		char lower = 'a' + i; //sama aja 
		
		while (count[upper] > 0) {
            printf("%c", upper);
            count[upper]--;
        }
        
        while (count[lower] > 0) {
            printf("%c", lower);
            count[lower]--;
        }
	}
	printf("\n");
	return 0;
}




