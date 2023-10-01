#include<stdio.h>
#include<conio.h>
void main()
{
  int a,sum=0;
  clrscr();
  printf("Enter a value=");
  scanf("%d",&a);
  sum=a*(a+1)/2;
  printf("Sum of number=%d",sum);
  getch();
}