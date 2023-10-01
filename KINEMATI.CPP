#include<stdio.h>
#include<conio.h>
void main()
{
 int s,d,t,op;
 clrscr();
 printf("OPTIONS\n");
 printf("1.Find time(s)\n");
 printf("2.Find speeed(m/s)\n");
 printf("3.Find distance(m)\n");
 printf("Enter options(1 - 3)");
 scanf("%d",&op);
 if(op==1)
 {
   printf("Enter speed(m/s) and distance(m)");
   scanf("%d%d",&s,&d);
   t=d/s;
   printf("Time(s) =%d",t);
 }
 else if(op==2)
 {
  printf("Enter distance(m) and time(s)\n");
  scanf("%d%d",&d,&t);
  s=d/t;
  printf("Speed(m/s)=%d",s);
 }
 else if(op==3)
 {
  printf("Enter speed(m/s) and time(s)\n");
  scanf("%d%d",&s,&t);
  d=s*t;
  printf("Distance(m)=%d",d);
 }
 else
 {
  printf("Invalid input\n");
 }
 getch();
}