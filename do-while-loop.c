#include <stdio.h>

int main(void)
{
    float zahl;
    float ergebnis = 0;

    do
    {
        printf("Bitte Zahl zum Addieren eingeben (0 zum Beenden);");
        scanf("%f", &zahl);
        ergebnis += zahl;
    }
    while(zahl != 0);

    printf("Das Ergebnis ist %f \n", ergebnis);

    return 0;
}