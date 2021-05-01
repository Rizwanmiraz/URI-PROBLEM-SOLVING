#include <stdio.h>

int main()
{

    int all, i, even = 0, odd = 0, positive = 0, negative = 0;

    for (i = 1; i <= 5; i++)
    {
        scanf("%d", &all);

        if (all > 0)
        {
            positive++;
        }
        if (all < 0)
        {
            negative++;
        }

        if (all % 2 == 0)
        {
            even++;
        }
        if (all % 2 == 1)
        {
            odd++;
        }
    }

    printf("%d valor(es) par(es)\n", even);
    printf("%d valor(es) impar(es)\n", odd);
    printf("%d valor(es) positivo(s)\n", positive);
    printf("%d valor(es) negativo(s)\n", negative);

    return 0;
}