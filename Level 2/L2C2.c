#include <stdio.h>

int main()
{
    float rad;
    scanf("%f", &rad);
    float PI = 3.14, area, ci;
    area = PI * rad * rad;
    ci = 2 * PI * rad;
    printf("%.2f\n", area);
    printf("%.2f", ci);
    return 0;
}