#include<stdio.h>
void swap(char[],int,int);
int main()
{
    int i=0,start=0,end=-1;
    char str [20];
    printf("Enter a string: ");
    gets(str);
    for(i=0;str[i];i++)
    {
        if(str[i]==' ')
        {
          start=end;
          end=i;
          swap(str,start+1,end-1);
        }  
    }
        start=end;
        end=i;
        swap(str,start+1,end-1);
        swap(str,0,end-1);
        printf("%s\n",str);
        
}
void swap(char str[], int start, int end)
{   char temp;
    while(start<=end)
    {
        temp=str[start];
        str[start]=str[end];
        str[end]=temp;
        start++;
        end--;
    }
}