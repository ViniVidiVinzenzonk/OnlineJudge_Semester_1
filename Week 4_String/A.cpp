#include <stdio.h> //di OJ gabisa pake gets
#include <string.h> //buat strlen

int main(void){
	int t;
	
	scanf("%d", &t); getchar();
	for(int i=0; i<t; i++){//looping test case
		int map[100];
		for(int j=0; j<100; j++){//initialize map jadi 0 lagi
			map[j] = 0;
		}
		char name[100000];
		scanf("%[^\n]",name); getchar();
		int len = strlen(name);
		int counter = 0;
		for(int j=0; j<len; j++){
			char current = name[j];
			if(map[current - 97]==0){ //biar kalau a =97, a jadi 0 (ascii nya)
				counter++;
				map[current - 97]=1;
			}
		} 
		if(counter%2==0){//Girl
			printf("Case #%d: Yay\n", i+1);
		}
		else printf("Case #%d: Ewwww\n", i+1);
		
	}
	return 0;
}
	//distinct character = perwakilan character
	//ABAC
	//disctinct character ada 3
	//caranya itu pake dictionary
	/* map[100]
	map[0] = 1 //A, kalo udah pernah ketemu, count ngga ditambah (if map[0] != 1, count++)
	map[1] = 1 //B
	map[2] = 1 //c
	count = 3
	
	
	return 0;
}*/
