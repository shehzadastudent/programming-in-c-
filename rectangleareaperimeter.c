// write a program to calculate the are and perimeter of a rectangle based on its length and width
#include<stdio.h>
int main()
{  printf("Name - Syed Multazam Ahmed Chishty\nSAP ID - 590028251\nCourse - BCA\nBatch - B5");
   printf("\n---------------------------------------------\n");   

   int length1,width1,area1;
   int parameter1;
    printf("\n\n\nenter the length and width of rectangle respectively");
    scanf("%d%d",&length1,&width1);
   area1=(length1*width1);
   parameter1=2*(length1+width1);
    printf("\nthe area of the numbers is =%d",area1);
    printf("\nthe parameter of the numbers is =%d",parameter1);
}	
