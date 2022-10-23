#include<stdio.h>
void sort(int*,int);
int main()
{
    int i, a[10];
    printf("Enter ten numbers: ");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    sort(a,10);
    printf("After sorting:\n");
    for(i=0;i<10;i++)
    printf("%d ",a[i]);
    return 0;  
}
void sort(int *p , int size)
{
    int i,j,temp;
    for(i=0;i<size-1;i++)
    {
        for(j=0;j<size-i-1;j++)
        {
            if(*(p+j)>*(p+j+1))
            {
                temp=*(p+j);
                *(p+j)=*(p+j+1);
                *(p+j+1)=temp;
            }
        }
    }
}