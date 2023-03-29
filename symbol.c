#include <stdio.h>
#include <stdlib.h>
void main()
{
    int i,n,flag;
    char sym[20];
    printf("enter the size of string = \n");
    scanf("%d",&n);
    printf("enter the string = \n");
    for(i=0;i<n;i++)
    {
        scanf("%s",&sym[i]);
    }
      for(i=0;i<n;i++)
    {
        if(sym[i]=='#')
        flag++;
        else if(sym[i]=='*')
        flag--;
    }
    printf("returned %d",flag);
    
    
}