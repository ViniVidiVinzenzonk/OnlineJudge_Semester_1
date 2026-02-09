// TEACHING ASSISTANT - Prob B
#include <stdio.h>
#include <string.h>

struct group{
	char name[11];
	int no;
} group1[201];

void in_group(int idx, char name[], int no){
	strcpy(group1[idx].name, name);
	group1[idx].no = no;
}

int main(void){
	int T, N;
	if (scanf("%d", &T) != 1) return 1;
	
	for(int i = 1; i <= T; i++){
		if (scanf("%d", &N) != 1) return 1;
		int group_count[21] = {0}; 
		
		for(int j = 1; j <= N; j++){
			char store_nama[11];
			int store_no;
			
			// FIX: Membaca Nama dan Nomor Grup yang dipisahkan spasi di satu baris
			if (scanf("%s %d", store_nama, &store_no) != 2) return 1; 
			in_group(j, store_nama, store_no);
			group_count[store_no]++;
		}
		printf("Case #%d:\n", i);
		
		// Loop untuk mencetak output
		for(int g = 1; g <= 20; g++){
			if(group_count[g] > 0){
				printf("Group %d(%d):\n", g, group_count[g]);
				// Loop dari j=1 sampai N untuk mencetak anggota sesuai urutan input
				for(int j = 1; j <= N; j++){
					if(group1[j].no == g){
						printf("%s\n", group1[j].name);
					}
				}
			}
		}
	}
	return 0;
}




