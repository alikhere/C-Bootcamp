#include<stdio.h>
int main()
{
    int a[10],i,s=100000;
    printf("Enter array element: \n");
    for(i=0;i<10;i++)
    {
      scanf("%d",&a[i]);
      s=s<a[i]?s:a[i];
    }
    printf("smallest no is %d \n",s);
    return 0;
}