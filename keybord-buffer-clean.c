#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int zufallszahl, eingabe;
    int durchgaenge;
    char auswahl;
    srand(time(0));

    printf("\nLustiges Zahlenraten");
    printf("\n--------------------");
    printf("\nErraten Sie die Zufallszahl in moeglichst wenigen Schritten!");
    printf("\nDie Zahl kann zwischen 1 und 100 liegen");

    do
    {
        zufallszahl = (rand() % 100 + 1);
        durchgaenge = 1;

        while (1)
        {
            printf("\nBitte geben Sie eine Zahl ein: ");
            scanf("%d", &eingabe);

            if (eingabe > zufallszahl)
            {
                printf("Leider falsch! Die zu erratende Zahl ist kleiner");
                durchgaenge++;
            }
            else if (eingabe < zufallszahl)
            {
                printf("Leider falsch! Die zu erratende Zahl ist größer");
                durchgaenge++;
            }
            else
            {
                printf("Glückwunsch! Sie haben die Zahl in %d", durchgaenge);
                printf(" Schritten erraten.");
                break;
            }
        }

        printf("\nNoch ein Spiel? (J/j für weiteres Spiel)");

        /* Rest vom letzten scanf aus dem Tastaturpuffer löschen */
        while ((auswahl = getchar()) != '\n' && auswahl != EOF);

        auswahl = getchar();

    } while (auswahl == 'j' || auswahl == 'J');

    return 0;
}