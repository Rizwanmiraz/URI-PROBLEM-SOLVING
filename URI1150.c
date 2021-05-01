#include <stdio.h>

int main()
{

    int x, z, i, a = 1, sum = 0;

    scanf("%d %d", &x, &z);

    while (z <= x)
    {
        scanf("%d", &z);
    }

    for (i = x; i <= z; i++)
    {
        sum += i;

        if (sum > z)
        {
            break;
        }

        a++;
    }

    printf("%d\n", a);

    return 0;
}