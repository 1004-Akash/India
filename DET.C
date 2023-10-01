#include<stdio.h>
#include<conio.h>
void main()
{
  int i,a[9];
  clrscr();
  for(i=0;i<9;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("%d",(a[0]*(a[4]*a[8])-(a[5]-a[7]))-(a[1]*(a[3]*a[5]-a[6]*a[8]))+(a[2]*(a[3]*a[7]-a[4]*a[6])));
  getch();
}