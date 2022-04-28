#include<stdio.h>
int main()
{
    int arr[100],n,i,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d ",&arr[i]);
        if(i%2)
        {
            s=s+arr[i];
        }
    }
    printf("%d",s);
}