#include<stdio.h>
int main()
{
    int i,c=0,d=0,s=0;
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

              default:
              s++;
          }
        
    }   
        printf("Number of alphabets is %d\n",c);
        printf("Number of digits is %d\n",d);
        printf("Number of special char. is %d\n",s); 
    return 0;
}  
