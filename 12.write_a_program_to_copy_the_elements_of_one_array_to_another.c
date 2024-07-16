#include<stdio.h>
void main()
{
    int n=4,a[4]={1,3,5,7},b[n],i;
    for(i=0;i<n;i++)
    {
        b[i]=a[i];
    }
    printf("the first array is:");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    printf("\nThe elements of second array:");
    for(i=0;i<n;i++)
    {
        printf("%d",b[i]);
    }
}
