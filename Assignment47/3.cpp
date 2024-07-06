#include <iostream>
#include <unordered_map>
#include <string>
#include <sstream>
using namespace std;

void Repeatation_Str(const string& str)
{
    unordered_map<string, int> count;
    istringstream iss(str);
    string word;
    while(iss >> word)
    {
        count[word]++;istringstream iss(str);
    }
    for(auto x = count.begin(); x!= count.end(); x++)
        {
           cout<<x->first<<" : "<<x->second<<endl; 
        }

}
int main()
{
    string s = "its time and its the best time";
    Repeatation_Str(s);
    return 0;
}