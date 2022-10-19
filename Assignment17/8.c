#include<stdio.h>
int main()
{
    char str[20],copy_str[20];
    int i;
    printf("Enter a string: ");
    gets(str);
    for(i = 0; str[i] != '\0'; i++)
    copy_str[i] = str[i];
    copy_str[i] = '\0';
    printf("Copied string = %s",copy_str);
    return 0;
}







/*
#include<stdio.h>
int main()
{
    int i;
    char str1[20], str2[20];
    printf("Enter the string: ");
    fgets(str1,20,stdin);
    printf("Copied string: %s\n",str1);
    for(i=0;str1[i]!='\0';i++);
       {
           str2[i]=str1[i];
       }
       str2[i]='\0';
        printf("Copied string: %s\n",str2);
        return 0;
}
*/