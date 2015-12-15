// Zaehlvariable
int i;

// Schleifenkopf
for (i = 0; i < 10; i++)
{
	// Schleifenrumpf
	printf("%i\n", i);
}

// Variablen
int basis = 2;
int exponent = 10;
int ergebnis;
int i;

// Dem Ergebnis die basis als initalen Wert zuweisen
ergebnis = basis;

for (i = 1; i < exponent; i++)
{
	// ergebnis wird in jedem Durchlauf mit basis multipliziert
	ergebnis = ergebnis * basis;
}