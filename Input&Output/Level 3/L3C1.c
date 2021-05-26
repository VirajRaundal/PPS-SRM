#include<stdio.h>
#include<math.h>

int main(){
     float gravity,distance,vf;
     scanf("%f",&distance);
     gravity=9.8;
     vf=sqrt(2*distance*gravity);
     printf("%.2f m/s",vf);
    return 0;
}