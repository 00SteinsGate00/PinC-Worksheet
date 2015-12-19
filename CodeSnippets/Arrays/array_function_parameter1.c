#include <stdio.h>

int sum(int a[10]){
	// Ergebnisvariable 
	int result = 0;
	for (int i = 0; i < 10; i++)
	{
		// Element des Arrays auf das Endergebnis addieren
		result+= a[i];
	}
	// Ergebnis zurueckgeben
	return result;
}

int main(void)
{
	// Array initalisieren
	int zahlen[10] = {1, 5, 7, 4, 45, 2, 6, 3, 5 ,92};

	// Summe in eigener Variable speichern
	int summe = sum(zahlen);

	// Summe ausgeben
	printf("%i\n", summe);

	return 0;
}