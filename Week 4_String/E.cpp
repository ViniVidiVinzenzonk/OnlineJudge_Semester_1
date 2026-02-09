#include <stdio.h>
#include <string.h>

int main(void){
	int t;
	scanf("%d", &t); getchar();
	
	for(int i=1; i<=t; i++){                                      //ATAU
		int q, s1, s2, count = -1;   
		char s[1002];                                             //do{
		scanf("%d", &q); getchar(); //q itu jumlah pair nya        scanf("%c", &s[count]);
			//getchar() buat ngambil space yg di enter stlh angka  if(s[count]=='\n'){
		do{													 	   //break;
			count++;											 //}else count++;
			scanf("%c", &s[count]); //s itu angkanya			  }while(count<1001);
		}while(s[count]!='\n');                                 //printf("%c%c%c%c%c", s[0], s[1], s[2], s[3], s[4], s[5]);
		s[count] ='\0';

		for(int j=0; j<q; j++){
			scanf("%d %d", &s1, &s2); getchar();
			
			while(s1-1<s2-1){
				char temp = s[s1-1];
				s[s1-1] = s[s2-1];
				s[s2-1] = temp;
				s1++;
				s2--;
			}
			//angkanya dibalik
//			printf("Angka S1: %d\n", s1); buat debugging
//			printf("Angka S1: %d\n", s2);
		}
		printf("Case #%d: ", i);
		
		for(int j=0;  j<count; j++){
			printf("%c", s[j]);
		}
		printf("\n");
	}
	return 0;
}
