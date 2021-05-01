#include <stdio.h>

int main(){

    float x,salary,bonus;
    int percentage;

    scanf("%f", &x);

    if (0 <= x && x <= 400.00) {

        percentage = 15;
        bonus = (x * 15) / 100;
        salary = x + bonus;


    } else if (400.01 < x && x <= 800.00) {

        percentage = 12;
        bonus = (x * percentage) / 100;
        salary = x + bonus;

    } else if (800.01 < x  && x <= 1200.00) {

        percentage = 10;
        bonus = (x * percentage) / 100;
        salary = x + bonus;

    } else if (1200.01 < x && x <= 2000.00) {

        percentage = 7;
        bonus = (x * percentage) / 100;
        salary = x + bonus;

    } else if (2000.00 < x) {
        
        percentage = 4;
        bonus = (x * percentage) / 100;
        salary = x + bonus;

    }

    printf("Novo salario: %.2f\n",salary);
    printf("Reajuste ganho: %.2f\n",bonus);
    printf("Em percentual: %d %%\n",percentage);

    return 0;
}