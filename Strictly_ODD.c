#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *arr,i,n,flag=0;
    scanf("%d",&n);
    arr=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2 && i%2==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}