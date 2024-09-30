// program to calculate Simple Interest 
/* Author:Carren Cherotich 
Reg:CT101/ G/22817/24
Date:24/9/24
*/
# include<stdio.h>
# include<math.h>
int main()
{
//a= total amount ,p= principle amount,r=rate,t= total Number of years
float a,p,r,t;
printf(" enter the principle amount: ");
scanf("%f",&p);
printf(" enter the rate:");
scanf("%f",&r);
printf(" enter the total Number of years:");
scanf("%f",&t);
a=(p*r*t)/100;
printf("the total amount is=%f\n ",a);
return 0;
}