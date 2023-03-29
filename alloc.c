#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *num = (int*)malloc(5* sizeof(int));
    int i;
    num[0]=1;
    num[1]=2;
    num[2]=3;
    num[3]=4;
    num[4]=5;
    printf("stored integers are = \n");
    for(i=0;i<5;i++)
    {
        printf("numbers [%d] = %d\n",i,num[i]);
       
    }
    printf("the address is %u ")
    return 0;
}