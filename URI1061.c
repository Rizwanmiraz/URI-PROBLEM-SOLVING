#include <stdio.h>

int main()
{

    int day1, h1, m1, s1, day2, h2, m2, s2, a, b, c, d, sec1, sec2, fsec;
    char dia1[4], dia2[4], del[4];

    scanf("%s %d\n", &dia1, &day1);
    scanf("%d %s %d %s %d\n", &h1, &del, &m1, &del, &s1);
    scanf("%s %d\n", &dia2, &day2);
    scanf("%d %s %d %s %d", &h2, &del, &m2, &del, &s2);

    sec1 = s1 + (m1 * 60) + (h1 * (60 * 60)) + (day1 * (24 * 60 * 60));
    sec2 = s2 + (m2 * 60) + (h2 * (60 * 60)) + (day2 * (24 * 60 * 60));

    fsec = sec2 - sec1;

    a = fsec / 86400;
    b = (fsec % 86400) / 3600;
    c = (fsec % 3600) / 60;
    d = (fsec % 60);

    printf("%d dia(s)\n", a);
    printf("%d hora(s)\n", b);
    printf("%d minuto(s)\n", c);
    printf("%d segundo(s)\n", d);

    return 0;
}