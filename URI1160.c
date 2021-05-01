#include <stdio.h>

int main()
{
    int test, y, i;
    int a, b;
    double ac, bc;

    scanf("%d", &test);

    for (i = 1; i <= test; i++)
    {
        y = 0;
        scanf("%d %d %lf %lf", &a, &b, &ac, &bc);

        while (a <= b)
        {
            a = a + (a * ac) / 100;
            b = b + (b * bc) / 100;

            y++;

            if (y > 100)
            {
                printf("Mais de 1 seculo.\n");
                break;
            }
        }

        if (y <= 100)
        {
            printf("%d anos.\n", y);
        }
    }
    return 0;
}