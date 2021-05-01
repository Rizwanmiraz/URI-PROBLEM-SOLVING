#include <stdio.h>

int main()
{

    int test, a, b, i, j, sum;

    scanf("%d", &test);

    for (i = 1; i <= test; i++)
    {
        sum = 0;

        scanf("%d %d", &a, &b);

        if (a % 2 == 0)
        {
            a++;
        }

        for (j = 1; j <= b; j++)
        {
            sum += a;
            a += 2;
        }

        printf("%d\n", sum);
    }

    return 0;
}