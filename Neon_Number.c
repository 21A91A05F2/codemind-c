#include<stdio.h>
int main()
{
    int num,d,p,a=0;
    scanf("%d",&num);
    p=num*num;
    while(p!=0)
    {
        d=p%10;
        a=a+d;
        p=p/10;
    }
    if(num==a)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
    return 0;
    
}