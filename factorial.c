//Q29: Write a program to calculate the factorial of a number.
#include<stdio.h>
int main()
{
	int n,a,factorial=1;
	printf("enter the  number : ");
	scanf("%d",&n);
	for (a=1;a<=n;a++)
	{
		factorial=factorial*a;
		}	
		printf("the factorial of the number %d is %d",n,factorial);
} 