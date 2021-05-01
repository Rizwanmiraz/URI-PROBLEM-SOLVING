#include <stdio.h>

int main()
{

    int a, sum = 0;
    float avg, c = 0;

    while (1)
    {
        scanf("%d", &a);

        if (a < 0)
        {
            break;
        }

        sum += a;
        c++;
    }

    avg = sum / c;

    printf("%.2f\n", avg);

    return 0;
}