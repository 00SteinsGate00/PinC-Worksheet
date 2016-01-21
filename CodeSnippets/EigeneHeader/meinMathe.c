#include "meinMathe.h"

// Definition
int quadrat(int n){
	return n* n;
}

int potenz(int basis, int exponent){
	int result = 1;

	while(exponent > 0){
		result *= basis;
		exponent--;
	}

	return result;
}

int fakultaet(int n){
	if(n > 1){
		return n * fakultaet(n-1);
	}
	else{
		return 1;
	}
}