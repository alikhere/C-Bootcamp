#include<stdio.h>
int main()
{
    
    int i,l=0;
    char str[20],a;
    printf("Enter the string: ");
    gets(str);
    for(l=0;str[l];l++);
    for(i=0;i<l/2;i++)
        {
           if(str[i]!=str[l-1-i])  
           break;
        }
     if(i==l/2)
       printf("Given string is palindrome\n");  
        else
         printf("Given string is not a palindrome\n");  
    return 0;
}  
