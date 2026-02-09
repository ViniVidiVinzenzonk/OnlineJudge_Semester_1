// ALPHABET CONVERTER 
#include <stdio.h>
#include <string.h>

int main(void){
    int i, j, k, t, n;
    int len;
    char s[105];
    char a, b;
    int changed[26];  // Track which characters have been transformed
    int count[26];
    
    FILE *fp = fopen("testdata.in", "r");
    if(fp == NULL) return 0;
    
    fscanf(fp, "%d", &t);
    
    for(i = 0; i < t; i++){
        fscanf(fp, "%s", s);
        len = strlen(s);    
        
        fscanf(fp, "%d", &n);
        
        for(k = 0; k < 26; k++){
            changed[k] = 0;
        }
        
        for(j = 0; j < n; j++){
            fscanf(fp, " %c %c", &a, &b);
            
            if(changed[a - 'A'] == 0){
                for(k = 0; k < len; k++){
                    if(s[k] == a){
                        s[k] = b;
                    }
                }
                changed[a - 'A'] = 1;  // Mark 'a' as transformed
            }
        }
        
        for(k = 0; k < 26; k++) count[k] = 0;
        
        for(k = 0; k < len; k++){
            if(s[k] >= 'A' && s[k] <= 'Z'){
                count[s[k] - 'A']++;
            }
        }
        
        for(k = 0; k < 26; k++){
            if(count[k] != 0){
                printf("%c %d\n", k + 'A', count[k]);
            }
        }                
    }
    fclose(fp);
    return 0;
}
