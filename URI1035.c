#include <stdio.h>

int main(){

    int A, B, C, D,sum,sum2;

    

    scanf("%d %d %d %d",&A, &B, &C, &D);

    sum = C + D;
    sum2 = A + B;

    if (B > C && D > A && sum > sum2 && C > 0 && D > 0 && A % 2 == 0) {

        printf("Valores aceitos\n");

    } else {

        printf("Valores nao aceitos\n");
        
    }



   /*  int a,b,c,d,sum,sum2,x,y,z,m,n;

    scanf("%d %d %d %d",&a, &b, &c, &d);

    x = b > c;
    y = d > a;

    sum = c + d;
    sum2 = a + b;

    z = c > 0;
    m = d > 0;

    n = a % 2 == 0;

    if (x && y && sum > sum2 && z && d && n) {

        printf("value accepted\n");

    } else {
        
        printf("value not accepted\n");
    } */

    
    

    

    return 0;
}