#include <stdio.h>

int main(){

    float A,B,C,perimetro,area;

    scanf("%f %f %f",&A ,&B, &C);

    perimetro = A + B + C;
    area = ((A + B) * C) / 2;

    if ( (A + B > C && (A + C) > B && (B + C) > A) ) {

        printf("Perimetro = %.1f\n",perimetro);

    } else {

        printf("Area = %.1f\n",area);

    }

    return 0;
}