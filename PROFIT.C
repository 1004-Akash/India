#include<stdio.h>
#include<conio.h>
void main()
{
  int cp,sp;
  clrscr();
  printf("Enter cost price and selling price:");
  scanf("%d%d",&cp,&sp);
  if(sp>cp)
  {
    printf("Profit");
  }
  else if(sp<cp)
  {
    printf("Loss");
  }
  else
  {
   printf("No profit no loss");
  }
  getch();
}