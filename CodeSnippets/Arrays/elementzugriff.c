// Zugriff ueber den Pointer
printf("%c\n", *ptr); // 120
// Zugriff ueber die eckigen Klammern
printf("%c\n", a[0]); // 120

printf("%c\n", *(ptr+1)); // 23
printf("%c\n", a[1]); // 23

// Setzt das 2. Element von a auf 3
a[1] = 3;

// Auch hier hat man keine Ahnung was dort im Speicher steht
printf("%c\n", a[10]);