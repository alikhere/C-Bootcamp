#include<stdio.h>
int input(int[],int );
int main()
{
    int least,n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int a[n];
    least=input(a,n);
    printf("smallest no in array is %d\n",least);
    return 0;
}
int input(int b[],int n)
{
    int i,least=10000;
    printf("Enter the elements of array: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
        least=least<b[i]?least:b[i];
    }
    return least;
}