#include <stdio.h>

int main()
{

    int A, B;
    float C, salary;

    scanf("%d %d", &A, &B);
    scanf("%f", &C);

    salary = B * C;

    printf("NUMBER = %d\n", A);

    printf("SALARY = U$ %.2f\n", salary);

    return 0;
}