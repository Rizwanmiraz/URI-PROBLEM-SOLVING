#include <stdio.h>

int main()
{

    int X, Y, temp, i, sum = 0;

    scanf("%d %d", &X, &Y);

    if (X > Y)
    {

        temp = X;
        X = Y;
        Y = temp;
    }

    for (i = X + 1; i <= Y - 1; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
    }

    printf("%d\n", sum);

    return 0;
}