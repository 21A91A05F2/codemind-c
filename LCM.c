#include<stdio.h>
int main()
{
    int a,b,min;
    scanf("%d %d",&a,&b);
    if(a>b)
        min=a;
    else
        min=b;
    while(1)
    {
        if(min%a==0 && min%b==0)
        {
            printf("%d",min);
            break;
        }
        ++min;
    }
}