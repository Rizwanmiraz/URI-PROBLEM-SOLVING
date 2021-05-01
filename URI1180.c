#include <stdio.h>

int main()
{

    int i, test;
    scanf("%d", &test);

    int arr[test];

    for (i = 0; i < test; i++)
    {
        scanf("%d", &arr[i]);
    }

    int lowe = arr[0];
    int index;

    for (i = 0; i < test; i++)
    {
        if (arr[i] < lowe)
        {
            lowe = arr[i];
            index = i;
        }
    }

    printf("Menor valor: %d\n", lowe);
    printf("Posicao: %d\n", index);

    return 0;
}