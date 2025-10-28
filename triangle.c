/*WAP to check if the triangle is valid or not. 
If the validity is established, do check if the triangle is isosceles, equilateral, right angle, or scalene. 
Take sides of the triangle as input from a user.*/
#include<stdio.h>
#include<math.h>
int main()
{   printf("Name - Syed Multazam Ahmed Chishty\nSAP ID - 590028251\nCourse - BCA\nBatch - B5");
    printf("\n---------------------------------------------\n");
	int s1,s2,s3;
	printf("ENTER THE SIDES OF TRIANGLE RESPECTIVELY: ");
	scanf("%d %d %d",&s1,&s2,&s3);
	if ((s1==0||s2==0||s3==0)||(s1 + s2 <= s3) || (s1 + s3 <= s2) || (s2 + s3 <= s1))
	{
		printf("This is not a triangle");
	}
	else if (s1==s2 && s2==s3)
	{
		printf("Equilateral Triangle");
	}
	else if (s1==s2||s1==s3||s2==s3)
	{
		printf("Iscoceles Triangle");
	}
	else if ((pow(s1,2)==pow(s2,2)+pow(s3,2))||(pow(s2,2)==pow(s1,2)+pow(s3,2))||(pow(s3,2)==pow(s2,2)+pow(s1,2)))
	{
		printf("Right angle triangle");
	}
	else
	{
		printf("Scalene Triangle");
	}



}