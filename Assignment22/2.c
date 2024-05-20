#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p;
    int i=0,n,sum=0;
    float avg;
    printf("Enter no of data: ");
    scanf("%d",&n);
    p=(int*)calloc(n,sizeof(int));
    if(p==NULL)
    {
        printf("Memory allocation is failed!\n");
        return 0;
    }
    printf("Enter the numbers:");
    for(i=0;i<n;i++)
    {
    scanf("%d",(p+i));
    }
    for(i=0;i<n;i++)
    {
        sum=sum+*(p+i);
    }
    avg=(float)sum/n;
    printf("Average value: %.2f\n",avg);
    free(p);
   return 0;
}