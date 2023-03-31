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
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    if((arr[0][0]==1)&&(arr[1][1]==1)&&(arr[1][0]==0&&arr[0][1]==0))
    {
        printf("Identity matrix");
    }
    else
    {
        printf("It is not a identity matrix");
    }
}