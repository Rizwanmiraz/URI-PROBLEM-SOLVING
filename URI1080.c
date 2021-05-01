#include <stdio.h>

int main()
{

    int n, i, high = 0, position;

    for (i = 1; i <= 100; i++)
    {
        scanf("%d", &n);

        if (n > high)
        {
            high = n;
            position = i;
        }
    }

    printf("%d\n%d\n", high, position);

    return 0;
}