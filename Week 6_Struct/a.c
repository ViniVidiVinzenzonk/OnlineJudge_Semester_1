//STUDENT DATABASE - Prob A
#include <stdio.h>
struct s{
	char i[21];
	char n[101];
	int a;	
};
struct s s1[1001];

int main(void){
	int n;
	scanf("%d", &n); getchar();
	int i=0;
	for(i=0; i<n; i++){
		scanf("%[^\n]", s1[i].i); getchar();
		scanf("%[^\n]", s1[i].n); getchar();
		scanf("%d", &s1[i].a); getchar();
	}
	
	scanf("%d", &n); getchar();
	for(i=0; i<n; i++){
		int t=0;
		scanf("%d", &t); getchar();
		t = t-1;
		printf("Query #%d:\n", i+1);
		printf("ID: %s\n", s1[t].i);
		printf("Name: %s\n", s1[t].n);
		printf("Age: %d\n", s1[t].a);
	}
	
	return 0;
}










