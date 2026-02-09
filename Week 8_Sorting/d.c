//Can You Guess The Guest - Prob D
#include <stdio.h>

void swap(long long *a, long long *b){
	long long temp = *a;
	*a = *b;
	*b = temp;
}

long long partition(long long *arr, long long low, long long high){
	long long pivot = arr[high];
	int i= low-1;
	int j;
	for(j=low; j<high; j++){
		if(arr[j]<pivot){
			i++;
			swap(&arr[j], &arr[i]);
		}
	}
	swap(&arr[high], &arr[i+1]);
	return i+1;
}

void quickSort(long long *arr, long long low, long long high){
	if(high>low){
		int pi = partition(arr, low, high);
		quickSort(arr, low, pi-1);
		quickSort(arr, pi+1, high);
	}
}

void solve(int caseNum){
	long long s[25];
	long long totalSum = 0;
	int i;
	
	for(i=0; i<25; i++){
		scanf("%lld", &s[i]);
		totalSum += s[i];
	}
	
	quickSort(s, 0, 24);
	long long p1 = s[0]/2; //karena pasti yg p1 itu yang terdikit
	long long p2 = s[1] - p1; //p2 = sorted terdikit kedua - p1
	long long p5 = s[24]/2; //p5 = sorted yang terbanyak/2
	long long p4 = s[23] - p5; //p4 = sorted terbanyak kedua - p5 
							   //logika mirip p1
	long long sumPlay = totalSum/10;
	// total dari s[25] = 10*(p1+p2+p3+p4+p5);
	long long p3 = sumPlay - (p1 + p2 +p4 + p5);
	
	printf("Case #%d: %lld %lld %lld %lld %lld\n", caseNum+1, p1, p2, p3, p4, p5);
	
}

int main(void){
	int t;
	scanf("%d", &t); getchar();
	int i;
	for(i=0; i<t; i++){
		solve(i);
	}
	return 0;
}
