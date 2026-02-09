// STOCK - Prob E
#include <stdio.h>
#include <string.h>

FILE *fp;

struct data {
    char item[60];
    int num;    
};

struct data datas[2000];

int main(void){
    int t, i, j, k, n;
    char choice[10]; 
    
    fp = fopen("testdata.in", "r");
    if(fscanf(fp, "%d", &t) != 1) return 0;
    
    for(i = 0; i < t; i++){ // looping per testcase
        if(fscanf(fp, "%d", &n) != 1) return 0;
        
        for(j = 0; j < n; j++){
            if(fscanf(fp, " %[^#]#%[^#]#%d", choice, datas[j].item, &datas[j].num) != 3) break;
            
            if(strcmp(choice, "sell") == 0){
                datas[j].num = -datas[j].num;
            }
        }
        
        // cek satu-satu, kalau ada nama yang sama di belakangnya, gabungin ke depan.
        for(j = 0; j < n; j++){
            // Kalau item ini sudah dihapus (kosong), skip
            if(datas[j].item[0] == '\0') continue; 

            for(k = j + 1; k < n; k++){
                // Kalau item k namanya sama dengan item j
                if(strcmp(datas[j].item, datas[k].item) == 0){
                    datas[j].num += datas[k].num; // Tambahkan stok ke j
                    datas[k].item[0] = '\0';      // Tandai k sebagai kosong/dihapus
                    datas[k].num = 0;
                }
            }
        }
        
        // check minus
        int ada_error = 0;
        for(j = 0; j < n; j++){
            if(datas[j].item[0] != '\0' && datas[j].num < 0){
                ada_error = 1;
                break; // Ketemu satu aja yang minus, berarti case ini error
            }
        }
        
        printf("Case #%d:\n", i + 1);
        
        if(ada_error == 1){
            for(j = 0; j < n; j++){
                if(datas[j].item[0] != '\0' && datas[j].num < 0){
                    printf("stock is not enough for product %s\n", datas[j].item);
                }
            }
        } else {
            for(j = 0; j < n; j++){
                if(datas[j].item[0] != '\0'){
                    printf("%s - %d\n", datas[j].item, datas[j].num);
                }
            }
        }
    }
    
    fclose(fp);
    return 0;
}


