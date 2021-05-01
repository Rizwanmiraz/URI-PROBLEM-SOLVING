#include <stdio.h>

int main()
{

    int N, i;
    float a, b, c, avg;

    scanf("%d", &N);

    for (i = 0; i < N; i++)
    {
        scanf("%f %f %f", &a, &b, &c);

        avg = a * 2 + b * 3 + c * 5;

        printf("%.1f\n", avg / 10);
    }

    return 0;
}
