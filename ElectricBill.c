//program to calculate charges based on unit consumed
/* Author: Carren cherotich
Reg :CT101/G/22817/24
Date:10/10/2024
*/
#include <stdio.h>
#include <math.h>
int main()
{
	int CustomerId, Unitconsumed;
	char CustomerName;
	float Totalbill, Surcharge, TotalAmount, ChargeperUnit;
	printf("enter customer Id:");
	scanf("%d", &CustomerId);
   printf("enter Customer Name:");
	scanf("%s", &CustomerName);
	printf("enter unit consumed:");
	scanf("%d", &Unitconsumed);
	
	if (Unitconsumed <= 199)
	{
		ChargeperUnit = 1.20;
	}
	else if (Unitconsumed <= 400)
	{
		ChargeperUnit = 1.50;
	}
	else if (Unitconsumed <= 600)
	{
		ChargeperUnit = 1.80;
	}
	else
	{
		ChargeperUnit = 2.00;
	}
	Totalbill = ChargeperUnit * Unitconsumed;
	if (Totalbill > 400) 
	{
        TotalAmount+= Totalbill * 0.15; 
	}
	
	printf("Customer Id:%d\n", CustomerId);
	printf("Unit consumed:%d\n", Unitconsumed);
	printf("CustomerName:%c\n", CustomerName);
	printf("Charges per unit:%f\n", ChargeperUnit);
	printf("Totalbill:%f", Totalbill);
	return 0;
}
