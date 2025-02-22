#include <iostream>
#include <stack>
#include <vector>
#define Amr std::ios_base::sync_with_stdio(0); std::cin.tie(0); std::cout.tie(0);
using namespace std;

int main()
{
    Amr;
    string s;
    cin>>s;
    vector<int> v(200,0);
    int cnt=0;
    for(int i=0;i<s.length();i++)
    {
        int num=(int)s[i];
        v[num]++;
        if(v[num]==1)
        {
            cnt++;
        }
    }

    if(cnt%2==0)
    {
        cout<<"CHAT WITH HER!";
    }
    else
    {
        cout<<"IGNORE HIM!";
    }
    
    return 0;
}
