#include <iostream>
#include <stack>
#include <vector>
#include <string>
using namespace std;

int main()
{
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
