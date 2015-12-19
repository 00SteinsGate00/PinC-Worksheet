// Initialisiert ein Array vom typ char mit 4 Eintraegen
char a[4] = {120, 23, 45, 52}; 

char* ptr = a;
// Wie man sieht ist die Addresse des Pointers die,
// in der der Verweis auf das erste Element von a steht
printf("%p\n", ptr); // 6084

printf("%c\n", *ptr); // 120
printf("%c\n", *(ptr+1)); // 23

printf("%c\n", *(ptr+10)); // Keine Ahnung was da steht

// Setzt das zweite Element des Arrays auf 3
*(ptr+1) = 3;