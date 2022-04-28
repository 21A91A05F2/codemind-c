#include<stdio.h>
int main()
{
    int num,s=0,temp;
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        s=s+(temp%10);
        temp /=10;
    }
    if(num%s==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}