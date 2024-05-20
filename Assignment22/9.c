#include<stdio.h>
#include<stdlib.h>
int main()
{
    char *p;
    int n;
    printf("Enter size in bytes: ");
    scanf("%d",&n);
    p=(char*)malloc(n);
    if(p==NULL)
    {
        printf("Memory allocation is failed!\n");
        return 0;
    }
    printf("Memory successfully allocated of size %d bytes\n",n);
    free(p);
   return 0;
}