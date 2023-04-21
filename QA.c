#include <stdio.h>
#include <string.h>
int main()
{
    int i,count=0;
    char Q[10][20]={"father","mother","brother","sister","gf","bf","bfa","cousin","aunty","uncle"};
    char A[10][20]={"babar","usually","dhd","urur","hdhdh","ururut","ururui","hrurur","hdjdj"};
    char Us[10][20];
    printf("1..father");
    printf("\n2..mother");
    printf("\n3..brother");
    printf("\n4..sister");
    printf("\n5..gf");
    printf("\n6..bf");
    printf("\n7..bfa");
    printf("\n8..cousin");
    printf("\n9..aubty");
    printf("\n10..uncle\n");
    for(i=0;i<10;i++)
    {
        printf("Enter an answer:");
        scanf(" %s",Us[i]);
    }
    for(i=0;i<10;i++)
    {
        if (strcmp(A[i],Us[i])==0)
        {
          count++;
        }
    }
    printf("the total number of scores:%d",count);
    return 0;