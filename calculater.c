/*Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
*/
#include<stdio.h>
int main ()
{
	double num1,num2,result;
	char op;
	printf("enter the first number : ");
	scanf("%lf",&num1);
    printf("enter the second number : ");
	scanf("%lf",&num2);
    printf("enter the operation you want to do : ");
	scanf(" %c",&op);
	switch(op)
	{
		case '+':
			result=num1+num2;
			printf("the sum of %.2lf and %.2lf is : %.2lf",num1,num2,result);
			break;
	    case '*':
			result=num1*num2;
			printf("the multiplication of %.2lf and %.2lf is : %.2lf",num1,num2,result);
			break;
	    case '/':
			if (num2!=0)
			{
			result=num1/num2;
			printf("the division of %.2lf and %.2lf is : %.2lf",num1,num2,result);
		    }
		    else printf("ERROR : division by zero is invalid");
		    break;
	    case '%':
			if ((int)num2!=0)
			{
			result=((int)num1%(int)num2);
			printf("the remainder of %.2lf and %.2lf is : %.2lf",num1,num2,result);
		    }
		    else printf("ERROR : can not divide by zero ");
		    break;
	    case '-':
			result=num1-num2;
			printf("the difference of %.2lf and %.2lf is : %.2lf",num1,num2,result);
			break;
	    default: printf("ERROR: INVALID INPUT!!!");
	}
	
}