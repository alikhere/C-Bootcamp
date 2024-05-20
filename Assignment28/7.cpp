#include <iostream>
using namespace std;

class Integer
{
    private:
    int n;
    
    public:
    Integer(int a=0)
    {
        n = a;
    }

    bool operator!()
    {
        if(!n)
        return true;
        else
        return false;
        
    }
};

int main()
{
    Integer c(2);
    if(!c)
    cout<<"True"<<endl;
    else
    cout<<"False"<<endl;
    return 0;
}