#include <stdio.h>
int main()
{
    int a[25][25],b[25][25],c[25][25],i,j,m,n;
    printf("enter the rows and columns of two martrices");
    scanf("%d%d",&m,&n);
    printf("\n enter the element of A martrix");
    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
    printf("\n enter the element of B martrix");
    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    scanf("%d",&b[i][j]);
    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    c[i][j]=a[i][j]+b[i][j];
    printf("\n the addtion of the teo martrices");
    for(i=0;i<m;i++)
    {
        printf("\n");
        for(j=0;j<n;j++)
         {
             printf("\t %d",c[i][j]);
         }
    }
}

