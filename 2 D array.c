//C array 2D array
/*Name:Carren Cherotich
Reg no:CT101/G/22817/24
*/
#include<stdio.h>
int main()
{
int i,j;
int marks[2][3]={{40,50,60},{70,80,90}};
for(i=0;i<2;i++){
for(j=0;j<3;j++)
printf("marks[%d][%d]=%d\n" ,i,j,marks[i][j]);}
return 0;
}