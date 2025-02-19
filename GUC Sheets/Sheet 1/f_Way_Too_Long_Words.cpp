#include <iostream>
#include <stack>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        if(s.length()>10)
            cout<<s.substr(0,1)<<s.length()-2<<s.substr(s.length()-1,1)<<"\n";
        else
            cout<<s<<"\n";
    }
    return 0;
}
