#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter a,b values");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
     
    printf("A value=%d",a);
    printf("B value=%d",b);
}