 #include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k=0;
  char str[3][2][20]; char user[1][2][20];
 for(i=0;i<3;i++)
 {
      printf("Enter username for user %d: ",i+1);
         for(j=0;j<2;j++)
         {
             if(j>0)
              printf("Enter password: ");
         gets(str[i][j]);
         }

 }
 printf("Enter your username: ");
          gets(user[0][0]);
        printf("Enter password: ");
           gets(user[0][1]);

         for(i=0;i<3;i++)  
          {
            if(strcmp(str[i][0],user[0][0]) == 0 && strcmp(str[i][1],user[0][1]) == 0)
              k++;
          }
          if(k>0)
        printf("Login successful\n");
            else
     printf("username or password not matched\n");
     return 0;
}    