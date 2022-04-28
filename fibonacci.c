#include<stdio.h>
void fib(int);
int main()
{
    int n;
    scanf("%d",&n);
    fib(n);
}
void fib(int x)
{
    int a=0,b=1,c,i;
    printf("%d %d ",a,b);
    c=a+b;
    for(i=3;i<=x;i++)
    {
        printf("%d ",c);
        a=b;
        b=c;
        c=a+b;
    }
}