#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        ll x;
        vector<ll> v;
        for(ll i=0;i<(n*m);i++)
        {
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        ll maxi1,maxi2,mini1,mini2,sum1=0,sum2=0;
        maxi1=v[(n*m)-1];
        maxi2=v[(n*m)-2];
        mini1=v[0];
        mini2=v[1];

        if(n>=m)
        {
            sum1+=(maxi1-mini1)*(n-1)*m;
            sum1+=(maxi1-mini2)*(m-1);

            sum2+=(maxi1-mini1)*(n-1)*m;
            sum2+=(maxi2-mini1)*(m-1);

            cout<<max(sum1,sum2)<<endl;
        }
        else
        {
            sum1+=(maxi1-mini1)*(m-1)*n;
            sum1+=(maxi1-mini2)*(n-1);

            sum2+=(maxi1-mini1)*(m-1)*n;
            sum2+=(maxi2-mini1)*(n-1);

            cout<<max(sum1,sum2)<<endl;
        }



    }

}