#include <stdio.h>

int main()
{
    int a, i, arr[100];

    scanf("%d", &a);

    arr[0] = 0;
    arr[1] = 1;

    for (i = 2; i < a; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }

    printf("%d", arr[0]);

    for (i = 1; i < a; i++)
    {
        printf(" %d", arr[i]);
    }

    printf("\n");

    return 0;
}