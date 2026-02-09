#include <stdio.h>

int main(void){
	int t;
	char a[10]={};
	char b[10]={};
	
	scanf("%d", &t); getchar();
    
	for(int i=1; i<=t; i++){
		scanf("%s %s", &a, &b); getchar();
		
		int len_a = 0;
		while(a[len_a]!='\0'){
			len_a++;
		}//ngecek isi dari string a itu ada isinya ato ngga// istilahnya ngitung pake string
		
		int len_b =0;
		while(b[len_b]!='\0'){
			len_b++;
		}
		
		for(int j=0; j<len_a/2; j++){
			char temp = a[j];
			a[j] = a[len_a -1 -j];
			a[len_a-1-j] = temp;
		}
	
		for(int j=0; j<len_b/2; j++){
			char temp = b[j];
			b[j] = b[len_b -1 -j];
			b[len_b-1-j] = temp;
		}
		//ngitung jumlah kata terbanyak 
		int maxlen = len_a > len_b ? len_a : len_b;
		
		char hasil[10] = {}; 
		
		int k=0;
		
		while(k<maxlen){
			
			int digitA = 0;
			if(k<len_a){
				digitA = a[k]-'0';// char to int
			}
			
			int digitB =0;
			if(k<len_b){
				digitB = b[k] -'0';
			}
			
			int total = (digitA+digitB)%10;
			
			hasil[k] = total +'0';
			
			k++;
		}
		
        hasil[k] = '\0';//ujungnya ditambahin \0 sebagai tanda dari end line
		
		int lenAkhir = k; //dibalik
			for(int j=0; j<lenAkhir/2; j++){
				char temp = hasil[j];
				hasil[j] = hasil[lenAkhir -1-j];
				hasil[lenAkhir -1-j] = temp;
			}
		
		char *hasilAkhir = hasil;
		
		//buat ngilangin 0 di awal
		//kenapa pake pointer? karena kalo pake pointer itu dia ngerujuk ke indeks paling awal
		//kalo gapake pointer dia tuh ngerujuk ke secara keseluruhan
		while(*hasilAkhir =='0' && *(hasilAkhir +1)!='\0'){
			hasilAkhir++;
		}
        
		printf("Case #%d: %s\n", i, hasilAkhir);
		
	}
	
	return 0;
}
