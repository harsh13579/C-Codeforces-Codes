#include<bits/stdc++.h>
using namespace std;
#define int long long
const int mod=1e9+7;
vector<int> factorial()
{
    
    const int N = 1e5+5;
    vector<int>fact(N);
    fact[0]=1;
     for(int i=1; i<N; i++)
     {
        fact[i]= fact[i-1]*i;
        fact[i]%=mod;
     }
     return fact;
}
signed main()
{
    
    vector<int>fact1;
    fact1=factorial();
    int t;
    cin>>t;
    while(t--)
    {
        int n,ans;
        cin>>n;
        if(n==1)
        {
            cout<<0<<endl;
            continue;
        }
        else
        {
            ans=n*(n-1);
            ans%=mod;
            ans=(ans*fact1[n])%mod;
        }
        cout<<ans<<endl;
    }
    return 0;
}