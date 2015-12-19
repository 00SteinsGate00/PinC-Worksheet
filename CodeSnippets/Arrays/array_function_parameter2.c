#include <stdio.h>

int sum(int a[], int length){
	// Ergebnisvariable 
	int result = 0;
	for (int i = 0; i < length; i++)
	{
		// Element des Arrays auf das Endergebnis addieren
		result+= a[i];
	}
	// Ergebnis zurueckgeben
	return result;
}

int main(void)
{
	// Arrays initalisieren
	int zahlen[10] = {1, 5, 7, 4, 45, 2, 6, 3, 5 ,92};
	int zahlen2[5] = {5, 56, 3, 39, 2};

	// Summen in eigenen Variablen speichern
	int summe  = sum(zahlen, 10);
	int summe2 = sum(zahlen2, 5);

	// Summen ausgeben
	printf("Summe1: %i\n", summe);
	printf("Summe2 %i\n", summe2);

	return 0;
}