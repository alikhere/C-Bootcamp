#include<stdio.h>
int main()
{
    int i,j,a[10][10],count=0,p,q,k=0,l;
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
            if(a[i][j]==1)
            count++;
        }
        if(count>k)
        {
            l=i+1;
            k=count;
        }
        count=0;
    }  
    if(k)
    printf("Row %d has maximum no of 1s:\n",l);
    else
    printf("There is no 1s in given matrix:\n");
return 0;
}
