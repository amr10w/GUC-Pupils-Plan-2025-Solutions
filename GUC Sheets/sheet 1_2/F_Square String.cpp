#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
#define sp "\n"
#define Amr std::ios_base::sync_with_stdio(0); std::cin.tie(0); std::cout.tie(0);
using namespace std;


int main()
{
   Amr;
   
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        if(s.length()%2!=0)
        {
            cout<<"NO"<<sp;
            continue;
        }

        //abab
        int j=s.length()/2;
        bool flag=true;
        for(int i=0;i<s.length()/2;i++)
        {
            if(s[i]!=s[j])
            {
                flag=false;
                break;
            }
            j++;
        }
        if(flag)
        {
            cout<<"YES"<<sp;
        }
        else
        {
            cout<<"NO"<<sp;
        }

    }
    

    return 0;
}
