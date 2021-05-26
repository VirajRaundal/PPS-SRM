#include <stdio.h>

int main()
{
    float basicPay, employeeFund, employerFund;
    scanf("%f", &basicPay);
    employeeFund = basicPay * 0.175;
    employerFund = basicPay * 0.235;
    printf("%.2f\n%.2f", employeeFund, employerFund);
    return 0;
}