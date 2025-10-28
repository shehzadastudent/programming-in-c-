//write a c program to find the roots of the quadratic equation?
#include<stdio.h>
#include<math.h>
int main()
{ printf("Name - Syed Multazam Ahmed Chishty\nSAP ID - 590028251\nCourse - BCA\nBatch - B5");
    printf("\n---------------------------------------------\n");
	double a,b,c,x1,x2,discriminant;
	printf("NOTE: THE VALUE OF A SHOULD NOT BE 0\n IF THE ANSWER RETURNS A NAN VALUE THAT MEANS NO REAL ROOTS\nenter the values of A B C respectively : ");
	scanf("%lf %lf %lf",&a,&b,&c);
	//printf("%dpow(x,2) %dx %d",a,b,c);
	
	discriminant=pow(b,2)-4*a*c;
	
	x1=(-b+sqrt(discriminant))/(2*a);
    x2=(-b-sqrt(discriminant))/(2*a);
    printf(" the first root is %.2lf\n",x1);
    printf("the second root is %.2lf",x2);
} 
