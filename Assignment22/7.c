#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    ptr=(int*)malloc(sizeof(int));
    ptr=NULL; // now we lost the address of dma variable which is called memory leak.
    return 0;
}