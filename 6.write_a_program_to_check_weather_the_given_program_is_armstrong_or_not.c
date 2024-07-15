#include<stdio.h>
void main()
{
int n,sum=0,rem=0,a;
scanf("%d",&n);
a=n;
while(n!=0)
{
rem=n%10;
sum=sum+rem*rem*rem;
n=n/10;
}
if(a==sum)
printf("Armstrong");
else
printf("Not an Armstrong");
}
