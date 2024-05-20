#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,sum=0,*p;
    printf("Enter no of data: ");
    scanf("%d",&n);
    p=(int*)calloc(n,sizeof(int));
    if(p==NULL)
    {
        printf("Memory allocation is failed!\n");
        return 0;
    }
    printf("Enter the numbers: ");
    for(i=0;i<n;i++)
    {
    scanf("%d",(p+i));
    }
    for(i=0;i<n;i++)
    {
        sum=sum+p[i];
    }
    printf("Sum is %d\n",sum);
    free(p);
   return 0;
}