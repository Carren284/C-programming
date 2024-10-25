//function to calculate the electricity bill based on units consumed
/*Name:Carren Cherotich
Reg no:CT101/G/22817/24
*/
#include <stdio.h>
float calculateCharges(int units);
float applySurcharge(float bill);
void displayBill(char customerID[],
 char customerName[], 
 int units,
 float chargePerUnit,
 float totalAmount);
 
int main() {
   
char customerID[20], customerName[50]; int unitsConsumed;
float chargePerUnit, totalAmount;

printf("Enter Customer ID: ");
scanf("%s", customerID);
 printf("Enter Customer Name: "); scanf("%s", customerName);
printf("Enter Units Consumed: ");
 scanf("%d", &unitsConsumed);
   
chargePerUnit = calculateCharges(unitsConsumed);
 totalAmount = chargePerUnit * unitsConsumed;
 totalAmount = applySurcharge(totalAmount);
 if (totalAmount < 100.0) {
 totalAmount = 100.0;   }
    
 displayBill(customerID, customerName, unitsConsumed, chargePerUnit, totalAmount);
return 0;
}

float calculateCharges(int units) {
 if (units <= 199) {
 return 1.20;
 } else if (units >= 200 && units < 400) {
 return 1.50;
 } else if (units >= 400 && units < 600) {
 return 1.80;
 } else {
 return 2.00;
 }
}
float applySurcharge(float bill) {
 if (bill > 400) {
 return bill * 1.15; 
 }
return bill;
}

void displayBill(char customerID[], char customerName[], int units, float chargePerUnit, float totalAmount) {
 printf("\nElectricity Bill\n");
  printf("Customer ID       : %s\n", customerID);
  printf("Customer Name     : %s\n", customerName);
 printf("Units Consumed    : %d\n", units);
  printf("Charges per Unit  : %.2f Ksh\n", chargePerUnit);
  printf("Total Amount to Pay: %.2f Ksh\n", totalAmount);
}
