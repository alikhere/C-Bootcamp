#include<stdio.h>
struct Employee
{
    int id;
    char name[20];
    float salary;
};
int main()
{
    struct Employee a={102,"Ali",20000.5};
    printf("%d %s %.2f\n",a.id,a.name,a.salary);
    return 0;
}
