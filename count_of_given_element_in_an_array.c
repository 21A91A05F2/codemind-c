#include<stdio.h>
int main()
{
    int arr[100],c=0,i,n,m;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d ",&arr[i]);
    }
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        if(arr[i]==m)
        {
            c++;
        }
    }
    printf("%d",c);
}