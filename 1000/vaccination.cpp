#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,d,w,res=0;
        cin>>n>>k>>d>>w;
        vector<ll>v(n);
        for(ll i=0;i<n;i++)
            cin>>v[i];
            
        ll open=-1;
        ll count=-1;
        for(ll i=0;i<n;i++)
        {
            if(v[i]<=open+d && count>0)
            count--;
            else{
                open=v[i]+w;
                count=k-1;
                res++;
            }
           
        }
        
        cout<<res<<endl;
 
    }
}