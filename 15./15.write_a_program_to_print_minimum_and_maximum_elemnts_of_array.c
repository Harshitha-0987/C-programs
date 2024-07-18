#include<stdio.h>
void main()
{
    int i,min,max;
    int arr[]={1,43,56,2,3,78};
    min=arr[0];
    max=arr[0];
    int n=sizeof(arr)/sizeof(arr[0]);
    for(i=1;i<n;i++)
    {
        if(arr[i]<min)
        min=arr[i];
        else if(arr[i]>max)
        max=arr[i];
    }
    printf("min-%d max-%d",min,max);
}
