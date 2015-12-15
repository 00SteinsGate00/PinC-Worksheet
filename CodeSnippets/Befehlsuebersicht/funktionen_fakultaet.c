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

int main()
{
	// berechnet die Fakultaet von 10
	int f = fak(5);

	// 120
	printf("%i\n", f);

	return 0;
}