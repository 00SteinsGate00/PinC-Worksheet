#include <stdarg.h>

// Der erster Paramter soll die Anzahl der variablen Paramter angeben
double quadratSumme(int count, ...){

	// die Summe
	int qSumme = 0;
	int summand;

	// eine va_list zum speichern der Argumente
	va_list argumente;

	// Startet den Zugriff auf die variablen Parameter
	// Benoetigt den letzten konkret angegebenen Paramter
	va_start(argumente, count);

	// Iterator
	int i;

	for (int i = 0; i < count; i++)
	{
		// holt den naechsten Paramter aus der Liste heraus
		// Wichtig ist hierbei das int, es gibt den Datentyp an
		summand = va_arg(argumente, int);
		qSumme += (summand * summand);
	}

	va_end(argumente);

	return qSumme;

}


int main(void)
{
	int sum  = quadratSumme(5, 2, 3, 4, 5, 6);
	int sum2 = quadratSumme(3, 5, 34, 3);

	return 0;
}