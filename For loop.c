//for loop
/*
Name: carren Cherotich
Reg:CT101/G/22817/24
*/
#include<stdio.h>

int main()
{
  int start,stop,sum=0;
  printf("Enter where to start:");
  scanf("%d",&start);
  printf("Enter when to stop:");
  scanf("%d",&stop);
  for(start;start<=stop;start++)
  {
    printf("%d\n",start);
    sum=sum+start;
    }
    printf("The sum is %d",sum);
    return 0;
    }
// Language:C 
// ProjectType:0 
// Copy the full code and open the CCoder APP to run it. 
// CCoder APP download link：https://play.google.com/store/apps/details?id=com.ikou.ccoding 