#include <stdio.h>

int main()
{
    int n = 11, o = 1, i, j;
    double M[12][12], sum = 0.0;
    char X[2];

    scanf("%s", &X);

    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; j++)
        {
            scanf("%lf", &M[i][j]);
        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = o; j < n; j++)
        {
            sum += M[j][i];
        }
        n--;
        o++;
    }
    if (X[0] == 'S')
    {
        printf("%.1lf\n", sum);
    }

    else if (X[0] == 'M')
    {
        printf("%.1lf\n", sum / 30.0);
    }

    return 0;
}