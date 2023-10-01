#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i;

 printf("Enter a number");
 scanf("%d",&n);
 printf("The factor of %d are",n);
 for(i=0;i<=n;i++)
 {
   if(n%i==0)
   {
     printf("%d",i);
   }
 }
}