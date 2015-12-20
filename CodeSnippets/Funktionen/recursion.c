// Diese Funktion gibt n mal "Hallo" aus
void hallo(int n){
	// Hier ruft die Funktion sich nochmal selbst auf
	// Dabei wird der Parameter n um eins veringert
	if(n > 0){
		printf("Hallo\n");
		hallo(n-1);
	}
	// In diesem Fall wird die Funktion enden
	else{
		printf("Hallo\n");
	}
}