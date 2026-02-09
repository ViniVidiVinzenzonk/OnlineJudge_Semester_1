#include <stdio.h>
int recursive(int a);
int counter=0;

int main(void){
    int a, N;
    
    scanf("%d", &N);
    for (int i =0 ; i<N ; i++){
        scanf("%d", &a); getchar();
        int hasil = recursive(a); //kenapa harus dimisalin? masalah scope
        // kalo recursive nya dipanggil
        printf("Case #%d: %d %d\n",i+1, hasil, counter);
        counter = 0;
    }
    return 0;
}

int recursive(int a){
    if(a ==0){
        return 1;
    } 
    else if (a==1){
    	return 2;
	}
	else if(a%15==0){
		counter++;
		return a*2;
	}
	else if(a%3==0){
		counter++;
	}
	else if(a%5==0){
		return a*2;
	}
    
    return recursive(a-1) + a + recursive(a-2) + (a-2);
    
}

