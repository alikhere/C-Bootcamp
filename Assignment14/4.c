#include<stdio.h>
int main()
{
    int a[10],i,k=-999999;
    printf("Enter array element: \n");
    for(i=0;i<10;i++)
    {
      scanf("%d",&a[i]);
      k=k>a[i]?k:a[i];
    }
    printf("largest no is %d \n",k);
    return 0;
}