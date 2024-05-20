#include <iostream>
#include <cstring>
using namespace std;

class CString
{
    private:
    char str[10];

    public:
    void get()
    {
        cin>>str;

    }
    
    CString operator+(CString c)
    {
        CString temp;
        strcat(str,c.str);
        strcpy(temp.str,str);
        return temp;
    }

    void operator==(CString c)
    {
        if(strcmp(str,c.str))
        cout<<"Strings are not equal"<<endl;
        else
        cout<<"String are equal"<<endl;
    }

    void display()
    {
        cout<<str<<endl;
    }


  

};

int main()
{
    CString c1,c2,c3;
    cout<<"Enter two strings:"<<endl;
    c1.get();
    c2.get();
    c1==c2;
    c3=c1+c2;
    c1.display();
    return 0;
  
}