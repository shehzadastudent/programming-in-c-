//Q27: Write a program to print the sum of the first n odd numbers.
#include<stdio.h>
/*int main ()
{
	int n,a=1,sum=0;
	printf("enter the number");
	scanf("%d",&n);
	while (a<=n)
	{
		if (a%2==1)
		{sum=sum+a;
		}
		a++;
	}
	printf("%d",sum);
}

//Q28: Write a program to print the product of even numbers from 1 to n.

int main()
{
	int a=1,n,product=1;
	printf("\nenter the numebr : ");
	scanf("%d",&n);
	while (a<=n)
	{
		if(a%2==0)
		{
			product=product*a;
		}
		a++;
	}
	printf("\n%d",product);
}

//Q29: Write a program to calculate the factorial of a number
int main ()
{
	int a=1,n,factorial=1;
	printf("enter the number :");
	scanf("%d",&n);
	while (n>=a)
	{
	   factorial=factorial*n;
	   n--;
	}
     printf("factorial of the number %d is : %d",n,factorial);
}

//Q30: Write a program to reverse a given number
int main ()
{
	int n,a=0,rev=0,newn;
	printf("enter the number :");
	scanf("%d",&n);
	while (n>0)
	{
		rev=n%10;
		newn=n/10;
		rev+=rev;						
	}    	
 printf("the number  %d",rev);
}
*/
//Q31: Write a program to take a number as input and print its equivalent binary representation.
	int main()
{
	int a=1,n, binary;
	printf("enter the number :");
	scanf("%d",&n);
	while(n==0)
	{
		binary=n/2;
	}
	printf("the number :%d",binary);
}
	

















