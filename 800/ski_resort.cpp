#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,q,count=0,sum=0,i=0,j;
        cin>>n>>k>>q;
        ll arr[n];
        for(ll i=0;i<n;i++)
        cin>>arr[i];

        while(i<n)
        {
            for(j=i;j<n;j++)
            {
                if(arr[j]<=q)
                count++;
                else
                break;
            }
            i+=(count+1);
            ll o=k;
            while(o<=count)
            {
                sum+=(count-(o-1));
                //cout<<sum<<endl;
                o++;
            }
            count=0;
        }
        cout<<sum<<endl;
    }
}