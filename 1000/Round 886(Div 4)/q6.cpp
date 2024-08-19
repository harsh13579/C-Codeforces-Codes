#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,x,maxi=0;
        cin>>n;
        map<ll,ll>m;
        map<ll,ll>m2;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            if(x<=n)
            {
                m2[x]++;
            }
        }
        ll j;
        for(auto ele:m2)
        {
            j=ele.first;
            while(j<=n)
            {
                m[j]+=ele.second;
                j+=ele.first;
            }
            
        }
        for(auto ele:m)
        maxi=max(maxi,ele.second);

        cout<<maxi<<endl;
    }
}