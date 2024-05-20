#include<stdio.h>
int main()
{
    int i,j,a[10][10],sum=0,n;
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
    for(i=0;i<n;i++)
    sum=sum+a[i][n-1-i];
    printf("Sum of left diagonal: %d\n",sum);
       

}
