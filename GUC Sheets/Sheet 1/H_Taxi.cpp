#include <iostream>
#include <stack>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int one=0;
    int two=0;
    int three=0;
    int four=0;
    
    int ans=0;

    while(n--)
    {
        int num ;cin>>num;
        switch (num)
        {
        case 1:
            one++; break;
        case 2:
            two++;break;
        case 3:
            three++;break;
        case 4:
            four++;break;
        default:
            break;
        }
    }

    ans+=four;

    ans+=(two/2);
    if(two%2!=0)
    {
        if(one>=2) one-=2;
        else if(one>0) one--;
        
        ans++;
        
    }

    if(three>=one)
    {
        ans+=three;
        one=0;
    }else if(three<one)
    {
        ans+=three;
        one-=three;
    }

    if(one>=4)
    {
        ans+= (one/4);
        int ones=(one/4);
        one -= (4* ones);
    }
    if(one>0&&one<4) ans++;
    

    cout<<ans;



    return 0;
}
