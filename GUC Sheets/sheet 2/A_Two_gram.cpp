#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#define ll long long
#define sp "\n"
#define Amr std::ios_base::sync_with_stdio(0); std::cin.tie(0); std::cout.tie(0);
using namespace std;


int main()
{
   Amr;
   map<pair<char,char>,int> s;

   int n;
   cin>>n;
   string st;
   cin>>st;
   
   s[make_pair(st[0],st[1])]++;
   for(int i=2;i<n;i++)
   {    
        s[make_pair(st[i-1],st[i])]++;
   }
   int ma=0;
   for(auto i:s)
   {
        if(i.second>ma)
        {
            ma=i.second;
        }
   }
   for(auto i:s)
   {
        if(i.second==ma)
        {
           cout<<i.first.first<<i.first.second;
           break;
        }
   }
    
    return 0;
}
