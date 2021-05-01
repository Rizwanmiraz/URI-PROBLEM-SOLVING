#include <stdio.h>

int main()
{

    int j = 0, x;
    float a, arr[2], avg;

    while (1)
    {
        while (1)
        {
            scanf("%f", &a);

            if (a >= 0 && a <= 10)
            {
                arr[j] = a;
                j++;
            }
            else
            {
                printf("nota invalida\n");
            }

            if (j > 1)
            {
                break;
            }
        }

        avg = (arr[0] + arr[1]) / 2.0;
        printf("media = %.2f\n", avg);
        j = 0;

        while (1)
        {
            scanf("%d", &x);
            printf("novo calculo (1-sim 2-nao)\n");

            if (x == 1 || x == 2)
            {
                break;
            }
        }

        if (x == 1)
        {
            continue;
        }
        else
        {
            break;
        }
    }
    return 0;
}