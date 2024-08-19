#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        int n,flag=0;
        cin>>n;
        vector<int> v(n);
        for(int i=0; i<n;i++)
            cin>>v[i];
        // for(int i=0; i<n; i++)
        // {
        //     if(v[0]!=v[i])
        //     {
        //         flag=1;
        //         break;
        //     }
        // }
        // if(!flag)
        // {
        //     cout<<0<<endl;
        //     continue;
        // }
        ll ans=0;
        for(ll i=1;i<=n;i++)
        {
            if(!(n%i))
            {
                ll maxi=-1e18,mini=1e18;
                for(ll j=0;j<n;j+=i)
                {
                    ll sum=0;
                    for(ll k=j;k<(j+i);k++)
                    {
                        sum+=v[k];
                    }
                    maxi=max(maxi,sum);
                    mini=min(mini,sum);
                }
                ans=max(ans,maxi-mini);
            }
        }
        cout<<ans<<endl;
    }
}