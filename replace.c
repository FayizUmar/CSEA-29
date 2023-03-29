#include <stdio.h>
#include <stdlib.h>
void main()
{
    int i,n,sum=0;
    int sym[20],flag=0;
   int temp[20];
    printf("enter the size = \n");
    scanf("%d",&n);
    printf("enter the array elements= \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&sym[i]);
    }
    printf("1D array");
    for(i=0;i<n;i++)
    {
        printf(" %d\t\n",sym[i]);
    }
     printf("revered array \n");
    for(i=n-1;i>=0;i--)
    {
        temp[i]=sym[i];
  
        printf("%d \t",temp[i]);
        if (temp[i] == 0) {
         temp[i] = '$';
      }
       printf("dollar changes \n");
       printf("%d \t",temp[i]);

    }
    
}