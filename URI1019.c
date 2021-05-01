#include <stdio.h>

int main(){

    int N,hour,minute,seconds;

    scanf("%d",&N);

    hour = N / 3600;
    minute = N % 3600;
    minute = minute / 60;
    seconds = N % 60;
    

    printf("%d:%d:%d\n",hour,minute,seconds);
    



    

    

    return 0;
}