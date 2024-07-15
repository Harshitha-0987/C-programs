#include<stdio.h>
void main()
{
int a=0,b=1,c=a+b,n,i;
printf("%d%d",a,b);
for(i=2;i<n;i++)
{
a=b;
b=c;
c=a+b;
printf("%d",c);
}
}
