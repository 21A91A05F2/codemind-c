#include<stdio.h>
int main()
{
    int n,i,j,s=0,a[100][100],c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                s=s+a[i][j];
            }
        }
    }
    printf("Principal Diagonal:%d
",s);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if((j+i)==n-1)
            {
                c=c+a[i][j];
            }
        }
    }
    printf("Secondary Diagonal:%d",c);
}