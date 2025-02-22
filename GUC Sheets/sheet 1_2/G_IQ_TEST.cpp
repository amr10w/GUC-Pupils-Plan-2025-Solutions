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
    int even_i=0;
    int odd_i=0;
    int e;
    for(int i=0;i<n;i++)
    {
        int num;
        cin>>num;
        if(num%2==0)
        {
            even_i=i;
            e++;
        }
        else
        {
            odd_i=i;
            
        }

    }
    if(e==1)
    {
        cout<<even_i+1;
    }
    else
    {
        cout<<odd_i+1;
    }
    

    return 0;
}
