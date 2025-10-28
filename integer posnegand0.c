#include<stdio.h>
int main()
{
	int a;
	printf("enter the number you want to check");
	scanf("%d",&a);
	if (a>0){printf("the number %d is positive integer",a);}
	else if (a==0){printf(" the number %d is 0 ",a);}
	else printf(" the number %d is negative integer ",a);
    return 0;
}