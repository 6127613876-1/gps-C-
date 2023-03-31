#include<stdio.h>
void main()
{
    int i,arr[10][10],n,j;
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
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
}