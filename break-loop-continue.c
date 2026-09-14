#include <stdio.h>

int main(void)
{
    double i;

    for(i = -10; i <= 10; i++)
    {
        if (i == 0)
             continue;

             printf("%lf \n", 1/i);
    }
    
    return 0;
}
