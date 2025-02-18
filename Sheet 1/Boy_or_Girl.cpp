#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main()
{
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
