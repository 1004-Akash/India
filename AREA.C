#include<stdio.h>
#include<conio.h>
void main()
{
 int r;
 float area;
 clrscr();
 printf("Enter radius of circle");
 scanf("%d",&r);
 area=3.14*r*r;
 printf("Area of circle=%f",area);
 getch();
}