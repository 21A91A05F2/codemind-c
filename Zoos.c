#include<stdio.h>
int main()
{
    int i,n,c=0,k=0,v;
    char str[20];
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]==122)
        {
            c++;
        }
        else if(str[i]==111)
        {
            k++;
        }
    }
    if(k==2*c)
    {
      printf("Yes");
    }
    else
    {
        printf("No");
    }
}