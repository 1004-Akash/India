#include<stdio.h>
#include<conio.h>
void main()
{
  int i,max,a[10],sum=0,n;
  clrscr();
  printf("Enter length of array");
  scanf("%d",&n);
  printf("The array elements");
  for(i=1;i<=n;i++)
  {
    scanf("%d",&a[i]);
  }
  max=0;
  for(i=1;i<=n;i++)
  {
     if(max<a[i])
     {
	max=a[i];
     }

  }
  printf("%d is the maximum value",max);
  getch();
}