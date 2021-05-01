#include <stdio.h>

int main()
{

    float all;
    int i, positive = 0;

    for (i = 1; i <= 6; i++)
    {
        scanf("%f", &all);

        if (all > 0)
        {
            positive++;
        }
    }

    printf("%d valores positivos\n", positive);

    return 0;
}