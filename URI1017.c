#include <stdio.h>

int main(){

    int a,b;
    float cal;
    

    scanf("%d %d",&a,&b);

    cal = (a*b) / 12.0;

    printf("%.3f\n",cal);

    return 0;
}