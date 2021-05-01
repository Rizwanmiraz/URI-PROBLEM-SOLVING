#include <stdio.h>

int main()
{

    int a, i, sum;

    while (1)
    {
        sum = 0;
        scanf("%d", &a);

        if (a == 0)
        {
            break;
        }

        if (a % 2 != 0)
        {
            a++;
        }

        for (i = 0; i < 5; i++)
        {
            sum += a;
            a += 2;
        }

        printf("%d\n", sum);
    }

    return 0;
}