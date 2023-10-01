#include<stdio.h>
#include<conio.h>
void main()
{
  int number,i,fact=1;
  clrscr();
  printf("Enter a number");
  scanf("%d",&number);
  for(i=1;i<=number;i++)
  {
     fact=fact*i;
  }
  printf("Factorial value=%d",fact);
  getch();
}