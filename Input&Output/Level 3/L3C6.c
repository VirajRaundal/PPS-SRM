#include<stdio.h>

int main(){
     int price,loaves,regularprice;
      scanf("%d",&loaves);
       price=185;
        regularprice=loaves*price;
         float discountrate,discount,finalprice;
          discountrate=0.6;
           discount=discountrate*regularprice;
           finalprice=regularprice-discount;
            printf("Regular Price=%d\nAmount Discounted=%.2f\nAmount to be paid=%.2f",regularprice,discount,finalprice); 
            //Line 12 has to be written like this due to NLOC.
    return 0;
}