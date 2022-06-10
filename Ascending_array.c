#include<stdio.h>
int main()
{
    int n,arr[100],i,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        if(arr[i]<arr[i+1])
        {
            k++;
        }
    }
    if(k==n-1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}