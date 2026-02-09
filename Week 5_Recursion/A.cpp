#include <stdio.h>
int recursive(int a, int *p_counter);

int main(void){
    int a, N;
    
    scanf("%d", &N);
    for (int i =0 ; i<N ; i++){
        int counter = 0;
        scanf("%d", &a); getchar();
        printf("Case #%d: %d %d\n",i+1, recursive(a, &counter), counter);
    }
    
    return 0;
}

int recursive(int a, int *p_counter){
    if(a%3 ==0){
        *p_counter +=1;
    }
    
    if (a<=0) return 1;
    else if(a==1) return 2; 
    
    if(a%5 ==0){
        return a*2;
    }
     
    return recursive(a-1, p_counter) + a + recursive(a-2, p_counter) + (a-2);
}
