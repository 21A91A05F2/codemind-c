#include<stdio.h>
int main()
{
    int n,i,arr[100],k,l,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d %d",&k,&l);
    for(i=0;i<n;i++)
    {
        if(l>=arr[i] && k<=arr[i])
        s=s+arr[i];
    }
    printf("%d",s);
}