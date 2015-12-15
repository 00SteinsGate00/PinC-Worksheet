int addition(int a, int b){
	return a + b;
}

int main(){
	int ergebnis, x, y;
	x = 5;
	y = 10;

	// Ergebnis bekommt den Wert 14
	ergebnis = addition(4, 10);

	// Ergebnis bekommt den Wert 18
	ergebnis = addition(y, 8);

	// ergebnis bekommt den Wert 15
	ergebnis = addition(x, y);

	return 0;
}