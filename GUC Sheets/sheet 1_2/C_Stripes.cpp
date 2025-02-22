#include <iostream>
#include <vector>
#define ll long long
#define sp "\n"
#define Amr std::ios_base::sync_with_stdio(0); std::cin.tie(0); std::cout.tie(0);
using namespace std;


int main()
{
    Amr;
   int t;
   cin>>t;
   while(t--)
   {
    char c[8][8];
    char last;
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            char x;
            cin>>x;
            c[i][j]=x;
            if(c[i][j]=='R') last='R';
            else if(c[i][j]=='B') last='B';
        }
    }
    bool flag=0;
    int cnt=0;
    for(int i=0;i<8;i++)
    {
        cnt=0;
        for(int j=0;j<8;j++)
         {
                if(c[i][j]=='R')
                {
                    cnt++;
                }
         }
         if(cnt==8) {flag=1; last='R';}
        
    }
    if(!flag) last='B';
    cout<<last<<sp;
}
    return 0;
}
