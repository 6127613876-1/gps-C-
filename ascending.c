#include<stdio.h>
void main()
{
    int i,arr[10],pos,n,j,x;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
     for ( i = 0; i < n; i++)
    {
        printf("arr[%d]=%d\n",i,arr[i]);
    }
    for (i = 0;i<n;i++)
    {
        for ( j = 0; j <n; j++)
        {
        if (arr[i]<arr[j])
        {
            x=arr[i];
            arr[i]=arr[j];
            arr[j]=x;
        }
        }
    }
    printf("The ascending order of the array");
    for ( i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
}