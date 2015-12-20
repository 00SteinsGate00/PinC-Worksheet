#include <stdio.h>

void dummy(int x){
	int y = x;
}

int main(void){
	int y = 7;

	// Funktionsaufruf
	dummy(12);

	printf("%i\n", y); // Immernoch 7

	return 0;
}