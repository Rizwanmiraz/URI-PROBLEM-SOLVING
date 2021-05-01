#include <stdio.h>

int main()
{

    // it's problem;
    float a;

    scanf("%f", &a);

    if (a >= 0.00 && a <= 2000.00)
    {

        printf("Isento\n");
    }
    else if (a > 2000.00 && a <= 3000.00)
    {

        a = a - 2000.00;
        a = (a * 8) / 100;

        printf("R$ %.2f\n", a);
    }
    else if (a > 3000.00 && a <= 4500.00)
    {

        a = a - 3000.00;
        a = (a * 18) / 100;

        printf("R$ %.2f\n", a + 80);
    }
    else if (a > 4500.00)
    {

        a = a - 4500.00;
        a = (a * 28) / 100;

        printf("R$ %.2f\n", a + 80 + 270);
    }

    return 0;
}