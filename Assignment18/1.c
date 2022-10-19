#include<stdio.h>
int length(char str[]);
int main()
{
    char str[20];
    printf("Enter the string: ");
    gets(str);
    printf("length of sring is %d\n",length(str));
    return 0;   
}
int length(char str[])
{
    int i;
    for(i=0;str[i];i++);
    return i;
}