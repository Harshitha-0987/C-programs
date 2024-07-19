   #include<stdio.h>
   void main()
   {
       int n1,n2,min,i,hcf;
       scanf("%d%d",&n1,&n2);
       min=((n1<n2)?n1:n2);
       for(i=1;i<=min;i++)
       {
           if((n1%i==0)&&(n2%i==0))
           hcf=i;
        }
        printf("the hcf is:%d",hcf);
   }
