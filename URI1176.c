#include <stdio.h>

int main()
{
    int test, i, j, k;
    long long arr[60];

    arr[0] = 0;
    arr[1] = 1;

    for (i = 2; i <= 60; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }

    scanf("%d", &test);

    for (i = 0; i < test; i++)
    {
        scanf("%d", &k);

        printf("Fib(%d) = %lld\n", k, arr[k]);
    }

    return 0;
}