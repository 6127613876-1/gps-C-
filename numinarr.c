#include<stdio.h>
void main()
{
    int i,arr[50],n,n1,j;
    printf("Enter the number of array you need");
    scanf("%d",&n);
    printf("%d\n",n);
    printf("Enter the number");
    scanf("%d",&n1);
    printf("%d\n",n1);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
      for ( i = 0; i < n; i++)
    {
        printf("arr[%d]=%d\n",i,arr[i]);
    }
    printf("\n");
    for ( i = 0; i < n; i++)
    {
        if(n1==arr[i])
        {
            printf("the position of the array is %d",i);
            break;
        }
    }
}