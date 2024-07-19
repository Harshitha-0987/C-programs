#include <stdio.h>
void main()
{
    int i,j,k,count=0;
    int arr[]={1,2,3,1,4,5};
    int length=sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<length;i++)
    {
        for(j=i+1;j<length;j++)                              
            if(arr[i]==arr[j])  
            {  
                for(k=j;k<length-1;k++)  
                    arr[k]=arr[k+1];  
                length--;
            }  
    }
 printf("\nArray elements after deletion:");  
    for(i=0;i<length;i++)  
    {  
        printf("%d\t",arr[i]);  
    }  
}
