#include <stdio.h>
#include <math.h>

int main(){

    double A, B, C, D, E, F;

    scanf("%lf %lf %lf", &A, &B, &C);

    D = (B * B) - (4 * A * C);


    if (A == 0 || D < 0) {

        printf("Impossivel calcular\n");
    

    } else {

        E = (-B + sqrt(D)) / (2 * A);
        F = (-B - sqrt(D)) / (2 * A);

        printf("R1 = %.5lf\n", E);
        printf("R2 = %.5lf\n", F);

    }


    return 0;
}