#include<stdio.h>
int main()
{
    int i,j,a[10][10],Trans[10][10],n;
    printf("Enter order of square matrix: ");
    scanf("%d",&n);
    printf("Enter element of %dX%d matrix :\n",n,n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            Trans[j][i]=a[i][j];

        }
    }
    printf("Transpose of given matrix:\n");
     for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",Trans[i][j]);
        }
        printf("\n");
    }
return 0;
}
