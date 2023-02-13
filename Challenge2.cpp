#include<stdio.h>

int main() {
	
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
