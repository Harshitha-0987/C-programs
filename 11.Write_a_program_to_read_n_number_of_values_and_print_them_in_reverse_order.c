#include<stdio.h>
void main()
{
    int n,i,a[5];
    printf("The number of elements in an array are:");
    scanf("%d",&n); 
    printf("The %d elments in array are:\n",n);
    for(i=0;i<n;i++)
    {
     printf("element - %d : ", i);
      scanf("%d", &a[i]);
    }
    printf("The values stored in the array are:");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
        }
    printf("\nIn reverse order\n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
    printf("\n\n");
}
