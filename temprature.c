#include<stdio.h>
// WAP a C program to Convert temperature from Celsius to Fahrenheit using the formula: F = (C * 9/5) + 32. 
int main()
{  printf("Name - Syed Multazam Ahmed Chishty\nSAP ID - 590028251\nCourse - BCA\nBatch - B5");
   printf("\n---------------------------------------------\n");
   
   double celsius,fahrenheit;
   printf("\n\n enter the celsius temprature : ");
   scanf("%lf",&celsius);
   fahrenheit=(celsius*(9.0/5.0))+32;
   printf("\nthe fahrenheit temprature is =%lf",fahrenheit);
   return 0;
   
}