#include <stdio.h>

int main(void){
	long long T, A, B;
	scanf("%lld", &T);
	
	for(int i =0; i<T; i++){
		scanf("%lld %lld", &A, &B);
	
		long long dariDepan = A/2; //untuk mendapatkan flip dari depan
		long long dariBelakang = A/2 - B/2; //untuk mendapatkan flip dari belakang

		if(dariDepan>dariBelakang){
		long long hasil = dariBelakang;
		}
		else hasil= dariDepan;
	printf("%lld", hasil);
	}

	return 0;
}

/* 4 halaman
1 lembar ada 2 halaman
lembar = 4:2 = 2 lembar
logic benar:
jika kita flip 1 kali, kita bisa langsung dapatkan 2 halaman, jadi tinggal dibagi 2 aja
jika halaman = 50 dan target halaman = 2, maka tinggal target halaman/2 = 1. Dalam 1x flip bisa langsung didapatkan
Jika halaman = 50 dan target halaman = 36, maka tinggal target halaman/2 = 18. Dalam 18x flip bisa langsung didapatkan

Sekarang, 

/* logic no. G minggu lalu

putar halaman bisa pakai i++ (dari halaman 1 ke belakang) or i-- (dari halaman belakang ke depan)

tiap kali dia perlu balik halaman 1, berarti k++
2 if statement:
1. Buka dari halaman end ke x
2. Buka dari halaman awal ke x

//kalo misal ada 100 halaman, berarti ujung2 nya ada1 sama 100, terus di tengah tengahnya ada 2 - 99, maks 50 flip

*/

salah logicnya:
jika total halaman ada genap:
	jika kita mau ke halaman ganjil, berarti ganjil % 2 halaman = 1x flip book
jika total halaman ada ganjil:
	jika kita mau ke halaman genap, berarti genap % 3 halaman = flip books
kenapa langsung 2 halaman, karena setiap 1x kita flip, bisa keliatan langsung 2 halaman

coba flip dari belakang: 


