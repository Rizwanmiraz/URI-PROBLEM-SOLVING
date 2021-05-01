#include <stdio.h>

int main(){

    int age,year,month,month2,day;

    scanf("%d",&age);

    year = age / 365;
    month2 = age % 365;
    month = month2 / 30;
    day = month2 % 30;
    


    printf("%d ano(s)\n",year);
    printf("%d mes(es)\n",month);
    printf("%d dia(s)\n",day);


    return 0;
}