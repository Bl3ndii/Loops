#include <stdio.h>

int main()
{
    int c;
    int zaehler = 0;

    printf("Leerzeichenzaehler - zum Beenden STRG + D\n");

    while((c = getchar()) != EOF)
    {
        if(c == ' ')
           zaehler++;
    }

    printf("Anzahl der Leerzeichen: %d\n", zaehler);

    return 0;
}