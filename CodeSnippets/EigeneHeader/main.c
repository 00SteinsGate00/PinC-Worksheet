// einbinden der eigenen Header Datei
#include "meinMathe.h"

#include <stdio.h>

int main(void)
{
	
	// Diese Funktionen sind in meinMathe.h deklariert
	int x = quadrat(2);
	int fak = fakultaet(x);

	printf("%i\n", fakultaet(x)); // 24

	return 0;
}