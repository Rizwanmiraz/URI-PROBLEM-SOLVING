#include <stdio.h>

int main()
{

    int i, x;

    scanf("%d", &x);

    int arr[x];

    for (i = 0; i < x; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < x; i++)
    {

        if (arr[i] == 0)
        {
            printf("NULL\n");
        }
        else if (arr[i] > 0)
        {

            if (arr[i] % 2 == 0)
            {
                printf("EVEN POSITIVE\n");
            }
            else if (arr[i] % 2 == 1)
            {
                printf("ODD POSITIVE\n");
            }
        }
        else if (arr[i] < 0)
        {

            if (arr[i] % 2 == -0)
            {
                printf("EVEN NEGATIVE\n");
            }
            else if (arr[i] % 2 == -1)
            {
                printf("ODD NEGATIVE\n");
            }
        }
    }

    return 0;
}