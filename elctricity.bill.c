/*Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ?5/unit 
Next 100 units at ?7/unit 
Next 100 units at ?10/unit 
Above at ?12/unit
*/
#include<stdio.h>
int main ()
{
	int bill,unit;
	printf("enter the units : ");
	scanf("%d",&unit);
	if ((unit>=1)&&(unit<=100))
	{
		bill=5*100;
		printf("the bill is :Rs %d",bill);
	}
	else if ((unit>100)&&(unit<=200))
	{
		unit=unit-100;
		bill=(5*100)+(7*unit);
		printf("the bill is :Rs %d",bill);
	}
	else if ((unit>200)&&(unit<=300))
	{
		unit=unit-200;
		bill=(5*100)+(7*100)+(10*unit);
 	    printf("the bill is :Rs %d",bill);
	}
	else
	{
		unit=unit-300;
		bill=(5*100)+(7*100)+(10*100)+(12*unit);
 	    printf("the bill is :Rs %d",bill);
	}
}