#include<stdio.h>
int main()
{
    int a[10],i,j,temp;
    printf("Enter array element: \n");
    for(i=0;i<10;i++)
    {
      scanf("%d",&a[i]);
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<10-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("second largest no is %d ",a[8]);
    return 0;
}