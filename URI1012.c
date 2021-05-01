#include <stdio.h>

int main()
{

    double A, B, C, pi = 3.14159, triangle, circle, trapezium, square, rectangle;

    scanf("%lf %lf %lf", &A, &B, &C);

    triangle = A * C / 2;
    printf("TRIANGULO: %.3lf\n", triangle);

    circle = pi * (C * C);
    printf("CIRCULO: %.3lf\n", circle);

    trapezium = (A + B) * C / 2;
    printf("TRAPEZIO: %.3lf\n", trapezium);

    square = B * B;
    printf("QUADRADO: %.3lf\n", square);

    rectangle = A * B;
    printf("RETANGULO: %.3lf\n", rectangle);

    return 0;
}