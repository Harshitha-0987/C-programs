#include <stdio.h>
void main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("a is large");
    }
    else if(b>c && b>a)
    {
        printf("b is large");
    }
    else
    {
        printf("c is large");
    }
}

