#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while (t--)
    {
        ll n,k,count=0,maxi=0;
        cin>>n>>k;
        vector<ll> v(n),a;
        for(int i=0;i<n;i++)
        cin>>v[i];
        sort(v.begin(),v.end());
        for(int i=0;i+1<n;i++)
        {
            ll q=abs(v[i]-v[i+1]);
            a.push_back(q);
        }
        for(auto ele:a)
        {
            if(ele<=k)
            count++;
            else
            {
                maxi=max(maxi,count);
                count=0;
            }
        }
        maxi=max(maxi,count);
        cout<<a.size()-maxi<<endl;
    }
}