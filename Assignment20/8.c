#include<stdio.h>
int main()
{
    int i,l,a[20],sum=0;
    int *p=&a;
    printf("Enter no of element in array: ");
    scanf("%d",&l);
    printf("Enter element: ");
    for(i=0;i<l;i++)
    {
    scanf("%d",&a[i]);
    sum=sum+*(p+i);
    }
    printf("sum = %d\n",sum);
    return 0;  
}