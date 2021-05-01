#include <stdio.h>

int main(){

    float a, b, c, d, avg, last;

    scanf("%f %f %f %f",&a, &b, &c, &d);

    a = a * 2;
    b = b * 3;
    c = c * 4;
    d = d * 1;

    avg = (a + b + c + d) / 10;
    
    printf("Media: %.1f\n", avg);


    if ( avg >= 7.0 ) {

        printf("Aluno aprovado.\n");

    } else if ( avg >= 5.0) {

        printf("Aluno em exame.\n");
        scanf("%f", &last);
        printf("Nota do exame: %.1f\n", last);

        avg = (avg + last) / 2;

        if (avg > 5.0) {

            printf("Aluno aprovado.\n");

        } else {

            printf("Aluno reprovado.\n");

        }

        printf("Media final: %.1f\n",avg);

    } else {
        printf("Aluno reprovado.\n");
    }

    return 0;
}