#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,sum,r;
    printf("enter 2 nos to be swapped  = ");
    scanf("%d %d",&a,&b);
    int *p,*q;
    p=&a;
    q=&b;

    *p = *p+*q;
    *q = *p-*q;
    *p = *p-*q;
    printf("after swapping = %d %d\n",*p,*q);
    sum = *p+*q;
    printf("sum is %d\n and address is %d \n",sum,&sum);
    
    printf ("address of a and b are %p %p\n",p,q);
    printf("value is %d %d\n",*p,*q);
    r= (*p / *q);
    printf("qoutient is %d",r);

    
    
    return 0;
}