#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long low=1,high=2e9;
        long long n;
        long long mid_comb,mid;
        cin>>n;
        while(low+1<high)
        {
            mid=low+(high-low)/2;
            mid_comb=(mid*(mid-1))/2;

            if(mid_comb<=n)
                low=mid;
            else
                high=mid;

        }
        mid_comb=(low*(low-1))/2;
        cout<<low+(n-mid_comb)<<endl;
        
    }
}