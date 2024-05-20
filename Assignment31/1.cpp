#include <iostream>
#include <string.h>
using namespace std;


class Person
{
    protected:
    string name;
    int age;

    public:
    void setAge(int x)
    {
        age = x;
    }

    void setName(string s)
    {
        name = s;
    }

    void getName()
    {
        cout<<"Enter name: ";
        getline(cin, name);
    }

    void getAge()
    {
        cout<<"Enter age: ";
        cin>>age;
    }
    
};

class Employee : public Person
{
    private:
    int empid;
    int salary;

    public:
    void setEmpid(int x)
    {
        empid = x;
    }

    void setSalary(int x)
    {
        salary = x;
    }

    void getEmpid()
    {
        cout<<"Enter employee id: ";
        cin>>empid;

    }

    void getSalary()
    {
        cout<<"Enter salary: ";
        cin>>salary;
    }

    void display()
    {
        cout<<"Name: "<<name<<endl<<"Age: "<<age<<endl<<"Employee id: "<<empid<<endl<<"Salary: "<<salary<<endl<<"********************"<<endl;
    }
};

int main()
{
    Employee c1,c2;
    c1.setName("Ali");
    c1.setAge(22);
    c1.setEmpid(12);
    c1.setSalary(40000);

    c2.getName();
    c2.getAge();
    c2.getEmpid();
    c2.getSalary();

    c1.display();
    c2.display();

    return 0;


    

}
