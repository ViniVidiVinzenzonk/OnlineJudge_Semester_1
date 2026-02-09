// SEARCHING - Prob A
#include <stdio.h>
#include <string.h>

int main(void){
	int x,y;
	FILE *fp;
	const char *file = "testdata.in";
    fp = fopen(file,"r");
    // Baca N (jumlah mahasiswa)
    if (fscanf(fp, "%d", &x) != 1) {
        fclose(fp);
        return 1;
    }

	struct student{
		int id;
		char nama[21];
	};
	
	// Gunakan array statis (1001 cukup jika N <= 1000)
	struct student students[1001];
	
	int i=0;
    // Loop untuk membaca data X mahasiswa
	for(i=0; i<x; i++){
		if(fscanf(fp, "%d %s", &students[i].id, students[i].nama)!=2) break;
	}
	
    // Baca Y (jumlah query)
	if (fscanf(fp, "%d", &y) != 1) {
        fclose(fp);
        return 1;
    }

    // Loop untuk menjalankan Y query
	for(i=0; i<y; i++){
		int id_search;
		// Baca ID yang dicari
		if (fscanf(fp, "%d", &id_search) != 1) break; 

		int flag=0;
		for(int j=0; j<x; j++){
			if(id_search==students[j].id){
				printf("Case #%d: %s\n", i+1, students[j].nama);
				flag=1;
				break; // FIX: Tambahkan break agar tidak melanjutkan loop jika sudah ketemu
			}
		}
		if(flag==0){
			printf("Case #%d: N/A\n", i+1);
		}
	}
	
	fclose(fp);
	return 0;
}









