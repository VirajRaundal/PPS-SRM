#include <stdio.h>

int main()
{
    int sec, h, m, s;
    scanf("%d", &sec);
    h = sec / 3600;
    m = (sec / 60) % 60;
    s = sec % 60;
    printf("%dH:%dM:%dS", h, m, s);

    return 0;
}