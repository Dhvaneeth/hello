#include<stdio.h>
#include<stdlib.h>

int c[10][10],d[10][10],n;

void floyds()
{
    int i,j,k;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            d[i][j]=c[i][j];
        }
    }
    for(k=0;k<n;k++)
    {
        for(i=0;i<n;i++)
        {
            d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
        }
    }
    printf("Least Distance Matrix is:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",d[i][j]);
        }
        printf("\n");
    }
}

int min(int a,int b)
{
    if(a<b)
        return a;
    return b;
}

void main()
{
    int i,j;
    printf("Enter the no of vertices\n");
    scanf("%d",&n);
    printf("Enter Cost matrix:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&c[i][j]);
        }
    }
    floyds();
}
