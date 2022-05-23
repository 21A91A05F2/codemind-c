#include<stdio.h>
int main()
{
    int n,flag=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if(i*(i+1)==n)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}