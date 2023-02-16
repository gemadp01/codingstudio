#include<stdio.h>

int fibonacci(int i) {

	return fibonacci(i-1) + fibonacci(i-2);
}

int main() {
	
	
	
	printf("%d",fibonacci(6));
	
	
	
	return 0;
}
