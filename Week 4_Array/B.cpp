#include <stdio.h>
int k=1;

int solve(){
	int N, M, Q;
	if(scanf("%d %d %d", &N, &M, &Q)!=3) return 1;
	
	int patterns[51][50];
	for(int i=1; i<=N; i++){ //friends
		for(int j=0; j<M; j++){ //rooms
			scanf("%d", &patterns[i][j]); getchar(); //nyimpen buat friends and rooms
		}
	}
	
	//friend 1 visit berapa kali, friend 2 visit berapa kali, dsb. 
	int visits[50];
	for(int i=0; i<Q; i++){
		scanf("%d", &visits[i]); getchar();
	}
	
	//buat lights di semua room 0
	int rooms[50];
	for(int i=0; i<M; i++){
		rooms[i] = 0;
	}
	
	//
	for(int i=0; i<Q; i++){ //kan semuanya berjalan berdasarkan visits
			int friend_id = visits[i];
		for(int j=0; j<M; j++){//Uuntuk setiap room
			if(patterns[friend_id][j]==1){//jika setiap friend nge toggle lampu di room itu
				rooms[j] = 1-rooms[j]; //bentuk lain dari XOR, bisa jadi rooms[j]^=1, bisa jadi (rooms[j]+1)/2
			}
		}
	}
	

	printf("Case #%d:\n", k);
	for(int i=0; i<M; i++){
		if(rooms[i]==1){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
}


int main(void){
	int t;
	scanf("%d", &t); getchar();
	for(int i=1; i<=t; i++){
		solve();
		k++;
	}
	return 0;
}
