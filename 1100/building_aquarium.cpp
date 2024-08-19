#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,x,h=0;
        cin>>n>>x;
        vector<ll>a(n);
        for(auto &i : a)
            cin>>i;
        h=1e10;
        ll l=1;
        ll ans=0;
        while(l<=h)
        {
            ll mid=l+(h-l)/2;
            ll cur_water=0;
            for(ll i=0;i<n;i++)
            {
                if(a[i]<mid)
                    cur_water+=(mid-a[i]);
            }
            if(cur_water<=x)
            {
                ans=mid;
                l=mid+1;
            }
            else
                h=mid-1;
        }
        cout<<ans<<endl;
    }
}
