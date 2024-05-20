#include<stdio.h>
int main()
{
    int i;
    char str[20],a;
    printf("Enter the string: ");
    gets(str);
    for(i=0;str[i];i++)
        str[i]=str[i]-32;
    printf("%s\n",str);  
    return 0;
}  