#include <iostream>
#include <unordered_map>
#include <string>
#include <sstream>
using namespace std;

string Repeatation_Str(const string& str)
{
    unordered_map<string, int> Count;
    istringstream iss(str);
    string word;
    while(iss >> word)
    {
        Count[word]++;istringstream iss(str);
        if(Count[word] > 1)
            return word;
    }

}
int main()
{
    string s = "its time, and its the best time";
    string result = Repeatation_Str(s);
    cout<<result<<endl;
    return 0;
}