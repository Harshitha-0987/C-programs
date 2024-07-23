#include<stdio.h>
void main()
{
    int n,a,sq;
    scanf("%d",&n);
    sq=n*n;
    if(sq%10==n%10)
    printf("automorphic");
    else
    printf("not a automorphic");
}
