#include<stdio.h>

int main() {
	
//	Repetition / Looping
//	mengulang kode di dalam scope selama kondisi bernilai true dan perulangan berhenti
//	adapun nanti kita membuat perulangan dengan case berulang-ulang
//	for, while, do while
//	break, continue (hampir sepaket dengan repetition), bisa dipake di if juga, switch case

/*	for(inisialisasi; kondisi; post increment/decrement) {
	scope statement yang akan diulang
	endfor
	
*/
//	inisialisasi i = 0, scope kode dijalankan dan kemudian variabel i = i + 1 (i = 1), berulang sampai kondisi terpenuhi
//	selisih 2 dengan mengganti statement terakhir dengan i += 2, i = i + 2
//	for(int i = 0; i < 10; i++) {
//		
//		penulisan bisa kaya gini tapi hanya sebaris
//		if(i == 5) continue/break;
//		
//		
//		printf("%d\n", i);	
//	}

//	printf("While:\n");
//	int j = 11;
//	while hanya menerima satu statement/kondisi dimana masih dijalankan
//	while (selama), selama apa maka apa
//	while(j <= 10) {
//		
//		printf("%d\n", ++j);
//		
//	}

//	do while, dimana perintah dijalankan terlebih dahulu baru di cek
//	printf("Do While:\n");
//	int k = 1;
//	do {
//		printf("%d\n", k++)
//	} while(j <= 10);

//	nested, didalam looping ada looping lagi
int size;
scanf("%d\n", &size);
for(int i = 1; i <= size; i++) {
	for(int j = 1; j <= size; j++) {
		if(j == 1 || j == size || i == 1 || i == size) {
			printf("*");
		} else {
			printf(" ");
		}
		
		
	}
	printf("\n");
}

return 0;	
}
