#include <iostream>
#include <vector>
#define ll long long
#define sp "\n"
#define Amr std::ios_base::sync_with_stdio(0); std::cin.tie(0); std::cout.tie(0);
using namespace std;


int main()
{
    Amr;
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        int num;
        cin>>num;
        arr[num-1]=i;
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]+1<<" ";
    }

   return 0;
}