#include <stdio.h>

int main()
{

    int all, i, positive = 0;

    for (i = 1; i <= 5; i++)
    {
        scanf("%d", &all);

        if (all % 2 == 0)
        {
            positive++;
        }
    }

    printf("%d valores pares\n", positive);

    return 0;
}