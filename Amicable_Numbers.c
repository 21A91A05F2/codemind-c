#include<stdio.h>
int main()
{
    int n,m,i,j,s=0,k=0;
    scanf("%d %d
",&n,&m);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        s=s+i;
    }
    for(j=1;j<m;j++)
    {
        if(m%j==0)
        k=k+j;
    }
    if(s==m && k==n)
    {
        printf("Amicable");
    }
    else
    {
        printf("Not Amicable");
    }
}