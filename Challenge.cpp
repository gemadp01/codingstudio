#include<stdio.h>

int main() {
	int bilanganPertama, bilanganKedua, bilanganKetiga;
	
//	1. Arithmetic Operators

//	Tambah
//	scanf("%d", &bilanganPertama);
//	scanf("%d", &bilanganKedua);
//	printf("%d\n", bilanganPertama+bilanganKedua);
//	
//	Kurang
//	scanf("%d", &bilanganPertama);
//	getchar();
//	scanf("%d", &bilanganKedua);
//	printf("%d\n", bilanganPertama-bilanganKedua);
//	
//	Kali
//	scanf("%d", &bilanganPertama);
//	getchar();
//	scanf("%d", &bilanganKedua);
//	printf("%d\n", bilanganPertama*bilanganKedua);
//	
//	Bagi
//	scanf("%d", &bilanganPertama);
//	getchar();
//	scanf("%d", &bilanganKedua);
//	printf("%d\n", bilanganPertama/bilanganKedua);
//	
//	Modulus (Sisa bagi)
//	scanf("%d", &bilanganPertama);
//	getchar();
//	scanf("%d", &bilanganKedua);
//	printf("%d\n", bilanganPertama%bilanganKedua);

//1.1	Arithmetic Operators
//scanf("%d %d", &bilanganPertama, &bilanganKedua);
//printf("%d\n", bilanganPertama+bilanganKedua);
//
//scanf("%d %d", &bilanganPertama, &bilanganKedua);
//printf("%d\n", bilanganPertama-bilanganKedua);
//
//scanf("%d %d", &bilanganPertama, &bilanganKedua);
//printf("%d\n", bilanganPertama*bilanganKedua);
//
//scanf("%d %d", &bilanganPertama, &bilanganKedua);
//printf("%d\n", bilanganPertama/bilanganKedua);
//
//scanf("%d %d", &bilanganPertama, &bilanganKedua);
//printf("%d\n", bilanganPertama%bilanganKedua);


//	2. Selection
	scanf("%d", &bilanganPertama);
	scanf("%d %d", &bilanganKedua, &bilanganKetiga);
	
	if(bilanganPertama >= bilanganKedua && bilanganPertama <= bilanganKetiga) {
		printf("%d diantara %d dan %d", bilanganPertama, bilanganKedua, bilanganKetiga);
	} else {
		printf("%d bukan diantara %d dan %d", bilanganPertama, bilanganKedua, bilanganKetiga);
	}
	
	return 0;
}
