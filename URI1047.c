#include <stdio.h>

int main(){

    int sh, sm, eh, em;

    scanf("%d %d %d %d",&sh, &sm, &eh, &em);

    if (em < sm ) {

        em = em + 60;
        eh = eh - 1;
        em = em - sm;

        if (eh < sh) {

            eh = eh + 24;
            eh = eh - sh;

        } else {
            eh = eh - sh;
        }

        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",eh,em);

    } else if (sh == eh && sm == em) {

        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");

    } else if (em > sm) {

        em = em - sm;

        if (eh < sh) {

            eh = eh + 24;
            eh = eh - sh;

        } else {
            eh = eh - sh;
        }

        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",eh,em);

    }

    

    return 0;
}