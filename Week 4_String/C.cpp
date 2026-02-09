//#include <stdio.h>
//#include <string.h>
//
//int main(void){
//	int t;
//	char m[1002], y[1002], a[1002];
//	scanf("%d", &t); getchar();
//	
//	for(int i =0; i<t; i++){
//		scanf("%[^\n]", m); getchar();
//		int len = strlen(m);
//		
//		for(int j=0; j<len; j++){
//			if(m[j]=='A'||m[j]=='E' ||m[j]=='I'||m[j]=='O'||m[j]=='U'){
//				a[j] = '0';
//			}
//			else if(m[j]=='B' ||m[j]=='F'||m[j]=='J'||m[j]=='P'||m[j]=='V'){
//				a[j] = '1';
//			}
//			else if(m[j]=='C' ||m[j]=='G'||m[j]=='K'||m[j]=='Q'||m[j]=='W'){
//				a[j] = '2';
//			}
//			else if(m[j]=='D' ||m[j]=='H'||m[j]=='L'||m[j]=='R'||m[j]=='X'){
//				a[j] = '3';
//			}
//			else if(m[j]=='M' ||m[j]=='S'||m[j]=='Y'){
//				a[j] = '4';
//			}
//			else if(m[j] = 'N'||m[j]=='T'||m[j]=='Z'){
//				a[i] = '5';
//			}
//			
//			if(m[j]=='A'|| m[j]=='B' || m[j] =='C'|| m[j] =='D'){
//				y[j] = 'A';
//			}
//			else if(m[j]=='E'|| m[j]=='F'|| m[j]=='G'|| m[j]=='H'){
//				y[j] = 'E';
//			}
//			else if(m[j]=='I'|| m[j]=='J' || m[j] =='K'|| m[j] =='L'|| m[j]=='M'|| m[j]=='N'){
//				y[j] = 'I';
//			}
//			else if(m[j]=='O'|| m[j]=='P' || m[j] =='Q'|| m[j] =='R'|| m[j]=='S'|| m[j]=='T'){
//				y[j] = 'O';
//			}
//			else if(m[j]=='U'|| m[j]=='V' || m[j] =='W'|| m[j] =='X'|| m[j]=='Y'|| m[j]=='Z'){
//				y[j] = 'U';
//			}
//
//		}
//		printf("Case #%d:\n", i+1);
//		for(int j=0; j<len; j++){
//			printf("%c", y[j]);
//		}
//		printf("\n");
//		for(int j=0; j<len; j++){
//			printf("%c", a[j]);
//		}
//		printf("\n");
//	}
// return 0;
//}
#include <stdio.h>
#include <string.h>

int main(void) {
    int t;
    char m[1001], y[1001] = {}, k[1001] = {};
    scanf("%d", &t);
    getchar();

    for (int i = 1; i <= t; i++) {
        scanf("%[^\n]", m);
        getchar();
        int len = strlen(m);

        for (int j = 0; j < len; j++) {
            char original_char = m[j];

            if (original_char >= 'A' && original_char <= 'D') {
                y[j] = 'A';
            } else if (original_char >= 'E' && original_char <= 'H') {
                y[j] = 'E';
            } else if (original_char >= 'I' && original_char <= 'N') {
                y[j] = 'I';
            } else if (original_char >= 'O' && original_char <= 'T') {
                y[j] = 'O';
            } else if (original_char >= 'U' && original_char <= 'Z') {
                y[j] = 'U';
            }

            k[j] = (original_char - y[j]) + '0';
        }

        y[len] = '\0';
        k[len] = '\0';

        printf("Case #%d:\n", i);
        printf("%s\n", y);
        printf("%s\n", k);
    }
    return 0;
}
