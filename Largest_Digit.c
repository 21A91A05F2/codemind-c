#include<stdio.h>
int main()
{
    int n,d,min=0;
    scanf("%d",&n);
    while(n>0)
    {
        d=n%10;
        if(min<d)
        {
            min=d;
        }
        n=n/10;
    }
    printf("%d",min);
   
}