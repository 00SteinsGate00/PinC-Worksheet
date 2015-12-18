// Dieser Interger steht an der Addresse 121 im Speiher
int k = 4593;

// Die Addresse von k
printf("%p\n", &k); // 121

// Pointer auf k erstellen
int* ptr = &k;

// Addresse auf die der Pointer zeigt
printf("%p\n", ptr); // 121

// Addresse des Pointers selbst
printf("%p\n", &ptr); // 7000

// Dereferenzierung des Pointers
printf("%i\n", *ptr); //4593 

// Veraendern von k
k = 5000;
// Der Wert auf den der Pointer zeigt
printf("%i\n", *ptr); // 5000

// Veraenderung ueber den Pointer
*ptr = 300;
// Wert von k
printf("%i\n", k); // 300