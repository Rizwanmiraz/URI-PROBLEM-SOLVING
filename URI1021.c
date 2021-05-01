#include <stdio.h>

int main(){

    double x;

    int notes[7] = {100 , 50 , 20 , 10 , 5 , 2 , 1},money_note[7], a,b;
    int coins[7] = {50, 25, 10, 5 , 1},money_coins[5], i;
    
    scanf("%lf",&x);

    a = x;
    

    for (i = 0; i < 7; i++) {

        money_note[i] = a / notes[i];
        a = a % notes[i];

    }

    

    a = x * 100;
    b = a % 100;

    for (i = 0; i < 5; i++) {

        money_coins[i] = b / coins[i];
        b = b % coins[i];

    }

    printf("NOTAS:\n");
    for (i = 0; i < 6; i++) {

        printf("%d nota(s) de R$ %d.00\n", money_note[i], notes[i]);

    }
    

    

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ %.2f\n", money_note[6], (float)notes[6]);

    for (i = 0; i < 5; i++) {

        printf("%d moeda(s) de R$ %.2f\n", money_coins[i], (float)coins[i] / 100);

    }
    
   

    return 0;
}