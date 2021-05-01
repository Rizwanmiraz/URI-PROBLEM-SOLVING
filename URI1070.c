#include <stdio.h>

int main()
{

    int x, i;

    scanf("%d", &x);
    if (x % 2 == 0)
    {
        x++;
    }

    for (i = 1; i <= 6; i++)
    {
        if (x % 2 == 1)
        {
            printf("%d\n", x);
            x += 2;
        }
    }

    return 0;
}