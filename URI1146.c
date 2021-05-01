#include <stdio.h>

int main()
{

    int X, i, j, k = 1;

    while (1)
    {
        scanf("%d", &X);

        if (X == 0)
        {
            break;
        }

        for (j = 1; j <= k; j++)
        {
            printf("%d", k);
        }

        for (i = k + 1; i <= X; i++)
        {
            printf(" %d", i);
        }

        printf("\n");
    }

    return 0;
}