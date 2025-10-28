#include<stdio.h>
int main ()
{
	char a;
	printf("enter the letter");
	scanf("%c",&a);
	if ((a>='a' && a<='z') || (a>='A' && a<='Z'))// double brackets because of || in between 
	{
	   if (a=='a' || a=='e' || a=='i' || a=='o' || a=='u' ||a=='A' || a=='E' || a=='I' || a=='O' || a=='U')
	   { 	printf("the character %c is a vowel",a);
	   }
	}
	else printf("the character %c is not vowel",a);
	return 0;
}