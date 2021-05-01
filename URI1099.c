/* #include <stdio.h>

int main()
{
    int test, a, b, j, i, temp, x = 0;
    scanf("%d", &test);

    int ar[test];

    for (i = 0; i < test; i++)
    {
        scanf("%d %d", &a, &b);
        if (a > b)
        {
            temp = a;
            temp = b;
            b = temp;
        }
        if (a % 2 == 0)
        {
            a--;
            a = a + 2;
        }

        for (j = a; j < b; j = j + 2)
        {
            x = x + j;
        }
        ar[i] = x;
        x = 0;
    }
    for (i = 0; i < test; i++)
    {
        printf("%d\n", ar[i]);
    }
    return 0;
}
 */
#include <stdio.h>
int main()
{
    int a, j, b, i, t, x = 0;

    scanf("%d", &t);

    int ar[t];

    for (i = 0; i < t; i++)
    {
        scanf("%d %d", &a, &b);
        if (a > b)
        {
            a = a + b;
            b = a - b;
            a = a - b;
        }
        if (a % 2 == 0)
            a--;
        a = a + 2;
        for (j = a; j < b; j = j + 2)
        {
            x = x + j;
        }
        ar[i] = x;
        x = 0;
    }
    for (i = 0; i < t; i++)
    {
        printf("%d\n", ar[i]);
    }
    return 0;
}