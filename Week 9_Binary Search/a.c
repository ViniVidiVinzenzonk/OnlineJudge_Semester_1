//Search Range - Prob A
#include <stdio.h>
#include <string.h>

struct dat{
	char name[256];
	int no;
};
struct dat data[15001];

//Binary Search for Char
int binarySearch(int n, char* key){
	int low = 0;
	int high = n-1;
	while(high>=low){
		int mid = low + (high-low)/2;
		
		if(strcmp(key, data[mid].name)==0){
			return mid;
		}
		if(strcmp(key, data[mid].name)<0){ //kalo data lebih kecil ketimbang data[mid]
			high = mid-1;
		}else low = mid+1;
	}
	return -1;
}

int normalize(int num){ //ngeganti yang - jadi +
	return num<0 ? num*(-1): num;
}

int main(void){
	int t, i;
	if(scanf("%d", &t)!=1) return 0;
	for(i=0; i<t; i++){
		if(scanf("%s %d", data[i].name, &data[i].no)!=2) return 1;
	}
	
	int n;
	if(scanf("%d", &n)!=1) return 0;
	for(i=0; i<n; i++){
		char name1[256], name2[256];
		if(scanf("%s %s", name1, name2)!=2) return 1;
		int score1 = binarySearch(t, name1); //dapetin indeksnya
		int score2 = binarySearch(t, name2);
		
		if(score1 == -1 || score2==-1){
			printf("not found\n");
			continue;
		}
		
		if(score1 == score2){
			printf("not valid\n");
			continue;
		}
		
		struct dat d1 = data[score1]; //copy struct data ke struct baru
		struct dat d2 = data[score2];
		printf("%d %d\n",normalize(d1.no - d2.no), normalize(score1-score2));
		
	}
	return 0;
}
