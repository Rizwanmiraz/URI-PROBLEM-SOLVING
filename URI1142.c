#include <stdio.h>

int main()
{

    int x, i, a = 1, b = 2, c = 3;

    scanf("%d", &x);

    for (i = 1; i <= x; i++)
    {
        printf("%d %d %d PUM\n", a, b, c);

        a += 4;
        b += 4;
        c += 4;
    }

    return 0;
}