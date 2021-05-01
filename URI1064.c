#include <stdio.h>

int main()
{

    float all, avg = 0;
    int i, positive = 0;

    for (i = 1; i <= 6; i++)
    {
        scanf("%f", &all);

        if (all > 0)
        {
            avg += all;

            positive++;
        }
    }

    printf("%d valores positivos\n", positive);
    printf("%.1f\n", avg / positive);

    return 0;
}