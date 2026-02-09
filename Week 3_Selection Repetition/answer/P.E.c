#include <stdio.h>
#include <string.h>

int main(void){
	
	int T, A, B, temp=0;
	scanf("%d", &T); getchar();
	
	for(int i=0; i<T; i++){
		scanf("%d %d", &A, &B); getchar();
		// awalnya Jojo akan mengkonsumsi A botol
		int minum_Madu = A;
		// sehingga awalnya Jojo akan memiliki A botol kosong
		int botol_kosong = A;
		
		//akan dilooping terus sampai botol_kosong <B
		while(botol_kosong>=B){
			//kemudian, jika botol_kosong>=B, maka botol_baru = botol_kosong/B
			int botol_baru = botol_kosong/B; //kalo botol_kosong dibagi B, kan pasti ada sisanya,
			//nah sisaya kita tampung di line 24 yang ada % nya itu lho
			//maka minum_Madu += botol_baru
			minum_Madu += botol_baru;
			//botol_baru yang sekarang kosong + sisa botol baru yang bisa diperoleh
			botol_kosong = botol_baru + (botol_kosong % B);
			// dan akan dilooping terus sampai botol_kosong <B
		}
		
		printf("Case #%d: %d\n", i+1, minum_Madu);
		
	}
	return 0;
}

/*
4 2
emptyBottles = 4
price = 2
FullBottles = 4 : 2 = 2
emptyBottles = 2
FullBottles = 2 : 2 = 1
totalBottles= emptyBottles + fullBottles + 

4 2
4/2 = 2
if(awal>akhir) awal = awal+ awal:akhir
if((awal:akhir)>=akhir) return function(awal:akhir, akhir)


void totalBottles(int awal, int akhir){
	int proses=0, counter =0;
	if(awal<akhir) proses = proses + awal;//jika botol dari awal udah ga cukup buat dituker
	proses = proses + awal:akhir; //kalo 4:2 = 2
	if(proses>=akhir) counter++;
	
	}
}


int botol(int awal, int akhir){
	if(awal>=akhir){
		awal = awal+ awal:akhir;
		temp = awal; 
		if((awal:akhir)>=akhkir){
			return botol(awal:akhir, akhir);
		}
	}	
	else return printf("%d\n", &awal);
}

botol(4,2)
awal = 4 + 2 = 6
temp = awal
awal 
botol(2,2)
awal = 2+1 = 3

*/



