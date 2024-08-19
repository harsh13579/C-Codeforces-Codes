#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,a,k=0,count=0;
        cin>>n;
        for(ll i=0; i<n; i++)
        {
            cin>>a;
            count+=(a-k)/120;
            k=a;
        }
        count+=(1440-k)/120;
        if(count>=2)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;

    }
}