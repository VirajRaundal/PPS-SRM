#include <stdio.h>

int main()
{
    int hour;
    double salaryperday, totsalary;
    scanf("%d", &hour);
    scanf("%lf", &salaryperday);
    totsalary = salaryperday * hour;
    printf("%.2lf", totsalary);

    return 0;
}