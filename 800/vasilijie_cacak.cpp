#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        long long x;
        cin>>n>>k>>x;
        long long max_sum=((ll)n*(n+1)/2)-((ll)(n-k)*(n-k+1)/2);
        long long min_sum=((ll)k*(k+1)/2);
        if(x<=max_sum && x>=min_sum)
            cout<<"YES"<<endl;
        else 
            cout<<"NO"<<endl;
    }
}