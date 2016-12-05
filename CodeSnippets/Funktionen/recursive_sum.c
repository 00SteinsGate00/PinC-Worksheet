#include <stdio.h>

// Diese Funktion berechnet die Gaussumme
// Gausssumme von 3: 3 + 2 + 1 = 6
// Gausssumme von 5: 5 + 4 + 3 + 2 + 1 = 15
int GaussSum(int x){
	if(x > 1){
		return x + GaussSum(x-1);
	}
	// In diesem Fall endet die Funktion
	else{
		return 1
	}
}

int main(void){

	printf("%i\n", GaussSum(5)); // 15

	return 0;
}
