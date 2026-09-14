#include <stdio.h>

int eingabe;
int passwort = 2323;

int main(void) {
    while (1) {
        printf("Geben Sie bitte das Zahlen-Passwort ein; ");
        scanf("%d", &eingabe);

        if (passwort == eingabe) {
            printf("Passwort korrekt\n");
            break;
        }
        else {
            printf("Passwort falsch\n");
        }
        printf("Bitte erneut versuchen\n");
    }
    return 0;
}