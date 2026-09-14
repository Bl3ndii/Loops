#include <stdio.h>

int main()
{
    int i, j, Zahl = 1;

    for (i = 1; i <= 11; i++)
    {
        for (j = 1; j <= 10; j++)
        {
            printf("%4i", Zahl++);
        }
        printf("\n");
    }
    return 0;
}