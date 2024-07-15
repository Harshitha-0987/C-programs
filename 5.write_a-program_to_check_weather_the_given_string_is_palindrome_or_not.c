#include<stdio.h>
void main()
{
int sum=0,rem,n,a;
scanf("%d",&n);
a=n;
while(n!=0)
{
rem=n%10;
sum=sum*10+rem;
n=n/10;
}
if(a==sum)
printf("palindrome");
else
printf("Not a palindrome");
}
