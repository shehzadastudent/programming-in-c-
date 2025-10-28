#include<stdio.h>
/*Q18: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
90-100: Grade A 
80-89: Grade B 
70-79: Grade C 
60-69: Grade D 
below 60: Grade F.
*/
int main ()
{
	printf("Name - Syed Multazam Ahmed Chishty\nSAP ID - 590028251\nCourse - BCA\nBatch - B5");
    printf("\n---------------------------------------------\n");
    int a;
    printf("enter your percentage");
    scanf("%d",&a);
    if (a>=0)
    {if (a>=90)
	 {printf("GRADE A");}
	 if ((a>=80)&&(a<=90))
	 {printf("GRADE B");}
	 else if ((a>=70)&& (a<=80))
	 {printf("GRADE C");}
	 else if ((a>=60) && (a<=70))
	 {printf("GRADE D");}
	 else {printf("GRADE F");
	 } 
	}


}