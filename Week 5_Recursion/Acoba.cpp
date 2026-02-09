//bisa pointer, tapi mesti void
#include <stdio.h>
void recursive(int a, int *p_counter);
int counter = 0; //alamat dari counter ngga dapet/ ngga berhasil diambil

int main(void){
    int a, N;
    
    scanf("%d", &N);
    for (int i =0 ; i<N ; i++){
        scanf("%d", &a); getchar();
    	recursive(a, &counter);
        printf("Case #%d: %d\n",i+1, counter);
    }
    
    return 0;
}

void recursive(int a, int *p_counter){
    if(a%3 ==0){
        (*p_counter)++;//ini gabisa lmao
        printf("%d\n", *p_counter);
    }
    
    /*if (a<=0) return 1;
    else if(a==1) return 2; 
    
    if(a%5 ==0){
        return a*2;
    }
     
    return *p_counter, recursive(a-1, p_counter) + a + recursive(a-2, p_counter) + (a-2);
*/
}
