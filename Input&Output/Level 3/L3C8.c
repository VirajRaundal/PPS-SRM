#include <stdio.h>

int main()
{
    float lph;
    int mpg;
    scanf("%d", &mpg);
    lph = 235.215 / mpg;
    printf("%.2f L/100 km", lph);
    return 0;
}