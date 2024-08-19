#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n,d,k,count=0,res=0;
    cin>>n>>d;
    vector<ll> v(n);
    for(auto &i : v)
    cin>>i;
    sort(v.begin(),v.end(),greater<ll>());
    ll i=0;
    while(n>0)
    {
        k=ceil((double)d/v[i]);
        if(d%v[i]!=0)
        count=k;
        else if(k*v[i]==d)
        count=k+1;
        
        n-=(count);
        if(n>=0)
        {
            if(count*v[i]>d)
                res++;
        }
        i++;
    }
    cout<<res<<endl;
}