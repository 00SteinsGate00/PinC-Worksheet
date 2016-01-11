int k = 523;
// Beide Pointer auf die Addresse von k setzten
int* ptr1 = &k;
int* ptr2 = &k;

// Den Wert auf den ptr1 zeigt um 1 erhoehen
*ptr1++;

// Den Wert von k ausgeben
printf("%i\n", k); // 524
// Den Wert auf den ptr2 zeigt ausgeben
printf("%i\n", *ptr2); // 524

// k selbst veraendern
k = k + 76;
printf("%i\n", *ptr1); // 400
printf("%i\n", *ptr2); // 400