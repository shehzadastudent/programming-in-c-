/*Q23: Write a program to calculate library fine based on late days as follows: 
First 5 days late: ?2/day 
Next 5 days late: ?4/day 
Next 20 days days late: ?6/day 
More than 30 days: Membership Cancelled.
*/
#include<stdio.h>
int main()
{
	int day,fine;
	printf("enter the days you are late");
	scanf("%d",&day);
	if ((day>=1) && (day<=5))
	{
		fine=2*day;
		printf("fine = %d",fine);
	}
	else if ((day>5) && (day<=10))
	{
		day=day-5;
		fine=(2*5)+(4*day);
		printf("fine = %d",fine);
	}
	else if ((day>10) && (day<=30))
	{
		day=day-10;
		fine=(2*5)+(4*5)+(6*day);
		printf("fine = %d",fine);
	}
	else
	{
		printf("membership cancelled");
	}
}