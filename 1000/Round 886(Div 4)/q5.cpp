#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,c,pro=0,sum=0,w;
        cin>>n>>c;
        vector<ll> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            pro += (v[i]*v[i]);
            sum += v[i];
        }
        pro-=c;
        ll b=-(sum/n);
        ll d=
        cout<<w<<endl;
    }
}