#include<stdio.h>
#include<math.h>
int main()
{
    int n,res;
    float fvar;
    scanf("%d",&n);
    fvar=sqrt((double)n);
    res=fvar;
    if(res==fvar)
    printf("True");
    else
    printf("False");
    return 0;
    
}