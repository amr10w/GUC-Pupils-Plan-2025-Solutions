#include <iostream>
#include <stack>
#include <vector>
#include <string>
#define Amr std::ios_base::sync_with_stdio(0); std::cin.tie(0); std::cout.tie(0);
using namespace std;

int main()
{
    Amr
    string s;
    cin>>s;

    int num= stoi(s);
    num++;
    s= to_string(num);
    
    
    while(true)
    {
        vector<int> vec(200,0);
        bool flag=true;
        for(int i=0;i<4;i++)
        {
            int number=(int)s[i];
            vec[number]++;
            if(vec[number]>1)
            {
                
                flag=false;
                break;
            }
        }
        if(flag)
        {
            cout<<num;
            break;
        }
        num++;
       s= to_string(num);
    }
    return 0;
}
