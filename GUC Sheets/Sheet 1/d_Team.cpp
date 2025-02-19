#include <iostream>
#include <stack>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int cnt=0;
    while (n--)
    {
        int q=0;
        for(int i=0;i<3;i++)
        {
            int num;
            cin>>num;
            if(num==1)
                q++;
        }
        if(q>=2)
            cnt++;

    }
    cout<<cnt;
    
    return 0;
}
