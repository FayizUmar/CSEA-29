#include <stdio.h>
#include <stdlib.h>
void main()
{
    int i,n,sum=0;
    int sym[20],flag=0;
    printf("enter the size = \n");
    scanf("%d",&n);
    printf("enter the array elements= \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&sym[i]);
    }
    for(i=0;i<n;i++)
    {
        printf(" %d\t\n",sym[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+=sym[i];
    }
    printf("sum is %d = \n",sum);
     for(i=2;i<=sum/2;i++)
    {
        if(sum%i==0)
        {
            flag = 1;
            break;
        }
        else
        {
            flag = 0;
        }
    }
    if(flag==1)
    {
        printf("number is not prime");
    }
    else
    {
        printf("number is prime");
    }
    

    
    
}