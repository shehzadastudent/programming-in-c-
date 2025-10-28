//Q22: Write a program to find profit or loss percentage given cost price and selling price.					
#include<stdio.h>
int main ()
{ 
    double sp,cp,profit,loss,percentage;
    printf("enter the cost price : ");
    scanf("%lf",&cp);
	printf("enter the selling price : ");
    scanf("%lf",&sp);
    if (sp>cp)
	{
	    profit=sp-cp;
		percentage=(profit/cp)*100;
	    printf("the profit is %lf",profit);
	    printf("the profit percentage is %lf",percentage);
	}
	else if (cp>sp)
	{
	    loss=cp-sp;
		percentage=(loss/cp)*100;
	    printf("the loss is %lf",loss);
		printf("the loss percentage is %lf",percentage);
	}
	else {printf("Niether Profit nor Loss");
	}

}