#include<stdio.h>
int len(char*);
int main()
{
    char str[20];
    printf("Enter a string: ");
    fgets(str,20,stdin);
    printf("%d\n",len(str));
    return 0;  
}
int len(char *p)
{   int i;
    for(i=0;*(p+i);i++);
    return i-1;
}