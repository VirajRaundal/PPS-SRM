#include <stdio.h>

int main()
{
    int GrossPayment, basic, da, hra;
    scanf("%d\n%d\n%d", &basic, &da, &hra);
    GrossPayment = (((da + hra) * basic) / 100) + basic;
    printf("%d", GrossPayment);
    return 0;
} //didn't work for some reason. Solve this if you think you can solve it 😔.