#include<stdio.h>
void main()
{
    int i,n1,n2,a[20],b[20],c[40];
    scanf("%d",&n1);
    printf("Enter the array elements:");
    for(i=0;i<n1;i++)
    {
       scanf("%d",&a[i]);
    }
    scanf("%d",&n2);
    printf("Enter the array elements:");
    for(i=0;i<n2;i++)
    {
       scanf("%d",&b[i]);
    }
    for(i=0;i<n1;i++)
    {
    c[i]=a[i];
    }
    for(i=0;i<n2;i++)
    {
    c[i+n1]=b[i];
    }
    printf("the merged array is:");
    for(i=0;i<n1+n2;i++){
    printf("%d",c[i]);
    }
}
