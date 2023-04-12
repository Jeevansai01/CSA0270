#include <stdio.h>
int main()
{
    int n,i,m=0,flag=0;
    printf("enter the number to check prime number:");
    scanf("%d",&n);
    m=n/2;
    for(i=2;i<=m;i++)
    {
    if(n%i==0);
    {
    printf("number is :");
    (flag=1);
    break ;
    }
    }
    printf("number is prime");
    return 0;
}