#include <iostream>
#include <stack>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int sum=0;
    while(n--)
    {
        string s;
        cin>>s;
        for(int i=0;i<3;i++)
        {
            if(s[i]=='+')
            {
                sum++;
                break;
            }
            else if(s[i]=='-')
            {
                sum--;
                break;
            }
        }
    }
    cout<<sum;
    return 0;
}
