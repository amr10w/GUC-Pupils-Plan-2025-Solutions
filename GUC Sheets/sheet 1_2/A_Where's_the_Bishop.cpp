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
        for(int i=0;i<8;i++)
        {
            for(int j=0;j<8;j++)
            {
                char x;
                cin>>x;
                c[i][j]=x;
            }
        }
        bool flag=false;
        int r=0,co=0;
        for(int i=0;i<8;i++)
        {
            int cnt=0;
            int cnt2=0;
            for(int j=0;j<8;j++)
            {
                if(c[i][j]=='.')
                {
                    cnt++;
                }
                
                if(c[i][j]=='#'&&cnt2<1)
                {
                    cnt=0;
                    cnt2++;
                }
                if(c[i][j]=='#'&&cnt==1&&cnt2==1)
                {
                    flag=true;
                    r=i+2;
                    co=j;
                    break;
                }
            }
            if(flag) break;
            
        }
        cout<< r<<" "<<co<<"\n";

    }
    return 0;
}
