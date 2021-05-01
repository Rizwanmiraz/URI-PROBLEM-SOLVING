#include <stdio.h>

int main()
{

    int a, b, c, d;
    float e, f, paid;

    scanf("%d %d %f", &a, &b, &e);
    scanf("%d %d %f", &c, &d, &f);

    paid = (e * b) + (f * d);

    printf("VALOR A PAGAR: R$ %.2f\n", paid);

    return 0;
}
