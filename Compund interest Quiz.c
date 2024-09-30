//program to calculate compound interest
/*Author: Carren Cherotich
Reg:CT101/G/22817/24
Date: 24/9/2024
*/
#include<stdio.h>
#include<math.h>
int main ()
{
//a=totalamount,p=principle, r=interest, n=number of compounding per year,
// t=total number of years, ci=compound interest
float a,p,r,n,t,ci;
printf("enter the principle amount:");
scanf("%f",&p);
printf("enter the rate:");
scanf("%f",&r);
printf("enter the number of years:");
scanf("%f",&t);
printf("enter the number of compounding per year:");
scanf("%f",&n);
a=p*pow((1+r/(n*100)),(n*t));
printf("the total amount is =%f\n",a);
ci=(a-p);
printf("the compound interest=%f\n",ci);
return 0;
}