#include<stdio.h>
int main()
{
	int a;
	printf("enter the year: ");
	scanf("%d",&a);
	if (a%4==0){printf("the year %d is a leap year",a);}
	else printf(" the year %d is not a leap year ",a);
    return 0;
}