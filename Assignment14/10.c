#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the size of arrays: \n");
    scanf("%d",&n);
    int a[n],b[n];
    printf("Enter elements of array a: \n");
    for(i=0;i<n;i++)
    {
     scanf("%d",&a[i]);
     b[i]=a[i];
    }
    printf("printing array b after coping fron array a\n");
    for(i=0;i<n;i++)
    printf("%d ",b[i]);
    return 0;
}