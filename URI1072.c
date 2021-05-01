#include <stdio.h>

int main()
{

    int x, y, i, count1 = 0, count2 = 0;

    scanf("%d", &x);

    for (i = 0; i < x; i++)
    {
        scanf("%d", &y);

        if (y >= 10 && y <= 20)
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }

    printf("%d in\n", count1);
    printf("%d out\n", count2);

    return 0;
}