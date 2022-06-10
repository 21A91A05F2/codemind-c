#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,arr[100],i,m,s=0,k=0,d;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    m=n/2;
    for(i=0;i<m;i++)
    {
        s=s+arr[i];
    }
    for(i=m;i<n;i++)
    {
        k=k+arr[i];
    }
    d=abs(s-k);
    printf("%d",d);
}