#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,i,n;
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
      scanf("%d",(p+i));
      for(i=0;i<n-1;i++)
        {
            if(p[0]<p[i+1])
              p[0]=p[i+1];
            if(p[n-1]>p[n-2-i])  
              p[n-1]=p[n-2-i];
        }
    printf("Maximum valve: %d\nMinimum value: %d\n",p[0],p[n-1]);
    free(p);
   return 0;
}