#include <stdio.h>
#include <string.h>

int main()
{
   char string[40];
   char temp;
   int i, j;
   printf("Enter a stirng: ");
   gets(string);
   int n = strlen(string);

   printf("String before sorting - %s \n", string);

   for (i = 0; i < n-1; i++) {
      for (j = i+1; j < n; j++) {
         if (string[i] > string[j]) {
            temp = string[i];
            string[i] = string[j];
            string[j] = temp;
         }
      }
   }
   printf("String after sorting  - %s \n", string);
   return 0;
}
   


/*
#include<stdio.h>
int main()
{
    int i,j,l;
    char str[20],temp;
    printf("Enter the string: ");
    scanf("%s",str);
    for(l=0;str[l];l++);
    for(i=0;i<l-1;i++);
       {
           for(j=0;j<l-i-1;j++)
             {
                 if(str[j]>str[j+1])
                   {
                       temp=str[j];
                       str[j]=str[j+1];
                       str[j+1]=temp;
                   }
             }
       }
        printf("Sorted string: %s\n",str);
        return 0;
}
*/