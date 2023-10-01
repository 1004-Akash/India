#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,op;
 clrscr();
 printf("Enter a,b values");
 scanf("%d%d",&a ,&b);
 printf("OPTIONS:\n");
 printf("1.Additon\n 2.Subtraction\n 3.Multiplucation\n 4.Division\n");
 printf("Enter option (1 to 4)");
 scanf("%d",&op);
 if(op==1)
 {
   printf("%d",a+b);
 }
 else if(op==2)
 {
   printf("%d",a-b);
 }
 else if(op==3)
 {
   printf("%d",a*b);
 }
 else
 {
   printf("%d",a/b);
 }
 getch();

}