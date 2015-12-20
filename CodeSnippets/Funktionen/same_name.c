#include <stdio.h>

// Innerhalb dieser Funktion ist der Parameter mit 
// dem Namen x verfuegbar
int square(int x){
	return x*x;
}

int main(void) {

	// Dieses x ist nur innerhalb der main Methode verfuegbar
	int x = 5;

	// Dieses x und das x innerhalb der square Funktion
	// sind verschiedene Variablen
	int sq = square(x);

	return 0;
}