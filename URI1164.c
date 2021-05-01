#include <stdio.h>

int main()
{

    int test, a, i, j, c;

    scanf("%d", &test);

    for (i = 1; i <= test; i++)
    {
        c = 0;
        scanf("%d", &a);

        for (j = 1; j < a; j++)
        {
            if (a % j == 0)
            {
                c += j;
            }
        }

        if (c == a)
        {
            printf("%d eh perfeito\n", a);
        }
        else
        {
            printf("%d nao eh perfeito\n", a);
        }
    }

    return 0;
}