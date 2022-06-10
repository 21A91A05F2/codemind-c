#include<stdio.h>
int main()
{
    int n,arr[100],s=0,i,k=0,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        s=0;
       for(j=1;j<arr[i];j++)
       {
           if(arr[i]%j==0)
           {
               s++;
           }
       }
       if(s==1)
       {
           k++;
       }
    }
    printf("%d",k);
}