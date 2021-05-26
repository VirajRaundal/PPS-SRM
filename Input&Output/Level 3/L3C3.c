#include <stdio.h>

int main()
{
    float distance, meter, feet, inches, centimeter;
    scanf("%f", &distance);
    meter = distance * 1000;
    inches=39370.1*distance;
     feet=3280.84*distance;
     centimeter=distance*100000;
    printf("%.2f m\n%.2f ft\n%.2f in\n%.2f cm", meter, feet, inches, centimeter);
    return 0;
}//Not working. Tried multiple formulae. No idea what they have used.