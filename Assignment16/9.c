#include<stdio.h>
int main()
{
    int i,j,a[10][10],count=0,p,q;
    printf("Enter order of matrix pXq: ");
    scanf("%d %d",&p,&q);
    printf("Enter element of %dX%d matrix:\n",p,q);

    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Given matrix:\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            if(a[i][j]==0)
            count++;
        }
    }  
    if(count>(p*q)/2)
    printf("Given matrix is sparse:\n");
    else
    printf("Given matrix is not sparse:\n");
return 0;
}
