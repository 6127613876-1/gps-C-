#include<stdio.h>
void main()
{
    int i,arr[10][10],n,j,arr1[10][10],c[10][10],k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        } 
    }
    for(i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            scanf("%d",&arr1[i][j]);
        } 
    }
    for(i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            scanf("%d",&c[i][j]);
        } 
    }
    for(i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            for (k=0;k<n;k++)
            {
                c[i][j]=c[i][j]+arr[i][k]*arr1[k][j];
            }
        } 
    }
    for(i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}