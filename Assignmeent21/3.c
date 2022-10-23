#include<stdio.h>
#include<string.h>
struct Employee input();
void Display(struct Employee);
struct Employee
{
    int id;
    char name[20];
    float salary;
};
int main()
{
    struct Employee b;
    b=input();
    Display(b);
    return 0;
}
struct Employee input()
{

    struct Employee a;
    char dummy; // using a dummy char.to empty buffer coz. fflush is not working in linux os
    printf("Enter employee id, name, and salary\n");
    scanf("%d",&a.id);
    scanf("%c",&dummy);
    fgets(a.name,20,stdin);
    scanf("%f",&a.salary);
    a.name[strlen(a.name)-1]='\0';
    return a;
}
void Display(struct Employee a)
{
printf("%d %s %.2f\n",a.id,a.name,a.salary);
}