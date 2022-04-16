#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    int i,len=0,count=0;
    scanf("%s",str);
    len=strlen(str);
    for(i=0;i<len;i++)
    {
        if(str[i]>=48 && str[i] <=57)
        {
            count++;
        }
    }
    if(count==0)
        printf("Doesn't contain digit");
    else
        printf("Contains %d digit",count);
}