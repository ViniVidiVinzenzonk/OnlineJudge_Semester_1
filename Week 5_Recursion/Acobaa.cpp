#include <stdio.h>
int recursive(int a);
int counter = 0;

int main(void){
    int a, N;
    
    scanf("%d", &N);
    for (int i =0 ; i<N ; i++){
        scanf("%d", &a); getchar();
        printf("Case #%d: %d %d\n",i+1, recursive(a), counter);
        counter = 0;
    }
    
    return 0;
}

int recursive(int a){
    if(a%3 ==0){
        counter +=1;
    }
    
    if (a<=0) return 1;
    else if(a==1) return 2; 
    
    if(a%5 ==0){
        return a*2;
    }
    
    return recursive(a-1) + a + recursive(a-2) + (a-2);
}
