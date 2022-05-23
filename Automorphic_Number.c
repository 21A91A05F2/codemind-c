#include<stdio.h>
int main()
{
    int n,sq,flag=1;
    scanf("%d",&n);
    sq=n*n;
    while(n!=0)
    {
        if(sq%10!=n%10)
        {
            flag=0;
            break;
        }
        n=n/10;
        sq=sq/10;
    }
    if(flag==1)
    {
        printf("Automorphic Number");
    }
    else
    {
        printf("Not an Automorphic Number");
    }
}