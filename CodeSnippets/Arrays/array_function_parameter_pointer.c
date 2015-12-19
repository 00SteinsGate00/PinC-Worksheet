#include <stdio.h>

int sum(int* numbers, int length){
	int result = 0;
	// per Pointer auf alle Elemente zugreifen
	for (int i = 0; i < length; i++)
	{
		// Mit dem i addiert man den offset auf den Pointer
		result += *(numbers+i);
	}
	return result;
}

int sum2(int* numbers, int length){
	int result = 0;
	// Zugriff per Arraysynthax
	for (int i = 0; i < length; i++)
	{
		// Man kann hier auch einfach die gewohnte Array Synthax nehmen
		result += numbers[i];
	}
	return result;
}

int main(void)
{
	int zahlen[5] = {23, 5, 2, 67, 3};

	int summe  = sum(zahlen, 5);
	int summe2 = sum2(zahlen, 5);

	printf("Summe1: %i\n", summe);
	printf("Summe2: %i\n", summe2);

	return 0;
}