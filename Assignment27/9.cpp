#include <iostream>
using namespace std;

class mystring
{
    char str[100];

    public:
    void get()
    {
        cout<<"Enter string: ";
        cin>>str;
    }

    void display()
    {
        cout<<"Given string: ";
        cout<<str<<endl;
    }

    void operator!();
};

void mystring::operator!()
{
    for(int i=0; str[i]; i++)
    {
        if(str[i]>=65 && str[i]<=96)
        str[i] = str[i]+32;
        else
        {
            if(str[i]>=97 && str[i]<=122)
            str[i] = str[i]-32;
        }
    }
    cout<<"reverse case string is: ";
    cout<<str<<endl;

}
 int main()
 {
    mystring s;
    s.get();
    s.display();
    !s;
    return 1;
 }