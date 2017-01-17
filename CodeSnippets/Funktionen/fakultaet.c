#include <stdio.h>

int fak(int n){
	// Ergebnisvariable initalisiern
	int fakultaet = 1;
	int i;

	// Fakultaet berechnen
	for (i = 1; i <= n; i++){
		fakultaet *= i;
	}

	// das Ergebnis zurueckgeben
	return fakultaet;
}

int main(void)
{
	// berechnet die Fakultaet von 5
	int f = fak(5);

	// 120
	printf("%i\n", f);

	return 0;
}