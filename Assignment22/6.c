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
        }
    printf("Largest element is %d\n",p[0]);
    free(p);
   return 0;
}