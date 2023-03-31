#include<stdio.h>
void main()
{
    int largest,second_largest,i,arr[10],n,j,x;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
     for ( i = 0; i < n; i++)
    {
        printf("arr[%d]=%d\n",i,arr[i]);
    }
    largest=arr[0];
    second_largest=arr[0];
    for(i=0;i<n;i++)
    {
        if (arr[i]>largest)
        {
            second_largest=largest;
            largest=arr[i];
        }
        else if (arr[i]>second_largest&&arr[i]!=largest)
        {
            second_largest=arr[i];
        }
    }
    printf("The second largest number is %d",second_largest);
}