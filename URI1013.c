#include <stdio.h>
#include <math.h>
int main()
{

    int a, b, c, result;

    scanf("%d %d %d", &a, &b, &c);

    result = (a + b + (abs(a - b))) / 2;
    result = (result + c + (abs(result - c))) / 2;

    printf("%d eh o maior\n", result);

    return 0;
}