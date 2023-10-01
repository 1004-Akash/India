#include<stdio.h>
#include<conio.h>
void main()
{
  int mark;
  clrscr();
  printf("Enter mark of student");
  scanf("%d",&mark);
  if(mark>=50)
  {
    printf("PASSED");
  }
  else
  {
    printf("FAILED");
  }
  getch();
}
