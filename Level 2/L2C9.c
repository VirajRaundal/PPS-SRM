#include <stdio.h>

int main()
{
    float num1, num2;
    int sum;
    scanf("%f\n%f", &num1, &num2);
    sum = (int)num1 + num2;
    printf("%d", sum);
    return 0;
}