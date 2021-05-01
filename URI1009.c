#include <stdio.h>

int main()
{

    char name[20];
    double salary, selles, sold, profit;

    scanf("%s", &name);
    scanf("%lf %lf", &salary, &selles);

    sold = (selles * 15) / 100;
    profit = salary + sold;

    printf("TOTAL = R$ %.2lf\n", profit);

    return 0;
}