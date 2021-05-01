#include <stdio.h>

int main(){

    int note[7] = {100,50,20,10,5,2,1},N,i,j[7];

    scanf("%d",&N);
    printf("%d\n",N);

    for (i = 0;i < 7;i++) {
        
        j[i] = N / note[i];
        N = N % note[i];
    }

    for (i = 0;i < 7;i++) {

        printf("%d nota(s) de R$ %d,00\n",j[i],note[i]);
    }
   
    return 0;
}