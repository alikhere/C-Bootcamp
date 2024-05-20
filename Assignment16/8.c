#include<stdio.h>
int main()
{
    int i,j,a[10][10],n;
    printf("Enter order of square matrix: ");
    scanf("%d",&n);
    printf("Enter element of %dX%d matrix:\n",n,n);

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Given matrix:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j<i)
            {
                a[i][j]=0;
            }
        }
    }  
    printf("Upper triangular matrix:\n");
     for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
return 0;
}
