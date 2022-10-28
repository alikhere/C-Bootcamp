#include<stdio.h>
int main()
{
    int i,j,a[10][10],sum=0,p,q;
    printf("Enter order of matrix qXq: ");
    scanf("%d %d",&p,&q);
    printf("Enter elements of %dX%d matrix:\n",p,q);
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            sum=sum+a[i][j];
        }
        printf("Sum of row %d : %d\n",i+1,sum);
        sum=0;
    }
    for(i=0;i<q;i++)
    {
        for(j=0;j<p;j++)
        {
            sum=sum+a[j][i];
        }
        printf("Sum of column %d : %d\n",i+1,sum);
        sum=0;
    }
       return 0;
}
