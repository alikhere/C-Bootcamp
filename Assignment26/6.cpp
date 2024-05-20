#include<iostream>
#include<string.h>
using namespace std;
class Student
{
    private:
    char name[20];
    int roll_no;
    int year;
    float cgpa;

    public:
    Student(char a[], int b, int c, float d)
    {
        strcpy(name,a);
        roll_no=c;
        year=b;
        cgpa=d;
    }
    void display()
    {
        cout<<"Name: "<<name<<endl<<"Year: "<<year<<endl<<"Roll no: "<<roll_no<<endl<<"CGPA: "<<cgpa<<endl;
    }
};
int main()
{
    Student c("Ali Atif",2,50,8.5);
    c.display();
    return 0;
}