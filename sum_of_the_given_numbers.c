#include<stdio.h>
int main()
{
    int i,a,t,sum=0;
    scanf("%d",&t);
    for(;t>0;t--)
    {
        scanf("%d %d",&a,&i);
        sum+=a+i;
        printf("%d
",sum);
        sum=0;
        
    }
    
    

}