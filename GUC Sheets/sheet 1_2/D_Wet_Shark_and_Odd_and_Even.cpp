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
   ll n;
   cin>>n;
   vector<ll> vec(n);
   ll sum=0;
   ll mino=1e10;
   for(ll i=0;i<n;i++)
   {
    ll num;
    cin>>vec[i];
    sum+=vec[i];
    if(vec[i]%2!=0)
    {
        if(vec[i]<mino)
        {
            mino=vec[i];
        }
    }

   }
   if(sum%2==0)
   {
    cout<<sum;
   }
   else{
    cout<<sum-mino;
   }
   
    return 0;
}
