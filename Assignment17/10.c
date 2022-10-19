#include<stdio.h>
int count(char c , char str[]);
int main()
{
    int i=0;
    char str[20],freq[256]={0};
    printf("Enter a string: ");
    gets(str);
    while(str[i])
    {
        freq[str[i++]]++;
    }
    for(i=0;i<256;i++)
    {
        if(freq[i])
        {
            printf("Frequency of %c: %d\n",i,freq[i]);
        }
    }
}













/*
    
    int i,k=0;
    char str[20];
    printf("Enter the string: ");
    gets(str);
    for(i=0;str[i];i++)
       {
           printf("Frequency of %c is %d\n",str[i],count(str[i],str));
       }
    return 0;    
int count(char c , char str[])
{
    int i,k=0;
       for(i=0;str[i];i++)
          if(str[i]==c)
          k++;
       return k;
} */