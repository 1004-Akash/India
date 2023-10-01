#include<stdio.h>
#include<conio.h>
int main()
{
  int a,b;
  clrscr();
  printf("Enter two numbers");
  scanf("%d%d",&a,&b);
  if(a>b)
  {
    printf("%d is the greatest",a);
  }
  else if(b>a)
  {
    printf("%d is the greatest",b);
  }
  else
  {
    printf("%d and %d are equal",a,b);
  }
  getch();
  return 0;
}