#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x;
    printf("Enter week number: ");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
        printf("Hello Atul");
        break;
        case 2:
        printf("Hello Rahul");
        break;
        case 3:
        printf("Hello Aman");
        break;
        case 4:
        printf("Hello Ankit");
        break;
        case 5:
        printf("Hello Atul");
        break;
        case 6:
        printf("Hello Arjun");
        break;
        case 7:
        printf("Hello Ali");
        break;
        default:
        printf("Invalid week number");
        break;
    }
    return 0;
}