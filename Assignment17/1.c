#include<stdio.h>
int main()
{
    int i;
    char str[20];
    printf("Enter the string: ");
    scanf("%s",str);
    for(i=0;str[i];i++);
    printf("length of sring is %d\n",i);
    return 0;   
}