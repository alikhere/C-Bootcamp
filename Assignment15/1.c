#include<stdio.h>
int input(int[],int );
int main()
{
    int max,n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int a[n];
    max=input(a,n);
    printf(" largest no in array is %d\n",max);
    return 0;
}
int input(int b[],int n)
{
    int i,max=-9999;
    printf("Enter the elements of array: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
        max=max>b[i]?max:b[i];
    }
    return max;
}