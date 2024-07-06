#include <iostream>
using namespace std;
#include<array>

array<int,6>  Prod_except_itself(array <int,6>arr)
{
    array<int,6> answer;
    int l = arr.size();
    for(int i=0; i<l; i++)
    {
        int prod = 1;
        for(int j=0; j<l; j++)
        {
            if(i != j)
            prod = prod*arr[j];
            else
            continue;
        }
        answer[i] = prod;
    }
    return(answer);

}

int main()
{
    array <int,6>arr = {1,2,3,4,5,6};
    array<int,6> answer = Prod_except_itself(arr);
    for(int i=0; i<5; i++)
    cout<<answer.at(i)<<" ";
    return 0;

}
