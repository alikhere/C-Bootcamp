#include<stdio.h>
int main()
{
    int i,c=0,d=0;
    char str[20],a;
    printf("Enter the string: ");
    gets(str);
    for(i=0;str[i];i++)
    {
        switch(str[i])
          {
              case 'A' ... 'Z':
              c++;
              break;

              case 'a' ... 'z':
              c++;
              break;

              case '0' ... '9':
              d++;
              break;
          }
        
    }   
        if(c>0 && d>0)
           printf("Given string is alphanumeric\n");
             else
               printf("Given string is not alphanumeric\n"); 

    return 0;
}  

    