#include<stdio.h>
struct Employee
{
    int id;
    char name[20];
    float salary;
};
int main()
{
    struct Employee a;
    printf("Enter employee id, name, and salary\n");
    scanf("%d",&a.id);
    scanf("%s",a.name);
    scanf("%f",&a.salary);
    printf("%d %s %.2f\n",a.id,a.name,a.salary);
    return 0;
}
