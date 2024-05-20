#include<iostream>
#include<string.h>
using namespace std;


class Person
{
    protected:
    string name,address,phone_no;

    public:
    void Input()
    {
        cout<<"Enter name: ";
        getchar();
        getline(cin,name);
        cout<<"Enter address: ";
        getline(cin,address);
        cout<<"Enter phone no: ";
        getline(cin,phone_no);
    }

};

class Employee : public Person
{
    protected:
    int eno;

    public:
    void Input()
    {
        cout<<"Enter employee no.: ";
        cin>>eno;
    }

};

class Manager : public Employee
{
    protected:
    string desig,dept;
    int salary;

    public:
    void Input()
    {
        cout<<"Enter designation: ";
        getline(cin, desig);
        cout<<"Enter department: ";
        getline(cin, dept);
        cout<<"Enter employee salary: ";
        cin>>salary;
    }

    int Salary()
    {
        return salary;
    }

    void display()
    {
        cout<<"Manager with highest salary is "<<salary<<" and manager name is "<<name<<endl;
    }
};

int main()
{
    int n,k,max=0;
    cout<<"How many manager you want to enter: ";
    cin>>n;
    
    Manager m[n];
    for(int i=0; i<n; i++)
    {   cout<<endl<<"Enter details of manager"<<endl<<"**************************"<<endl;
        m[i].Employee::Input();
        m[i].Person::Input();
        m[i].Manager::Input();
    }
    for(int i=0; i<n; i++)
    {
        if(m[i].Salary() > max)
        {
            max = m[i].Salary();
            k = i;
        }
    }
    m[k].display();

    return 0;
}