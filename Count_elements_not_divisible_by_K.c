#include<stdio.h>
int main()
{
    int n,m,arr[100],i,k=0;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%m)
        {
            k++;
        }
    }
    printf("%d",k);
}