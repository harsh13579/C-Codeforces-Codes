#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,s,sum=0,x;
        cin>>n;
        vector<ll>max1;
        vector<ll>max2;
        for(ll i=0; i<n; i++)
        {
            vector<ll>size;
            vector<ll>temp;
            cin>>s;
            size.push_back(s);
            for(ll j=0; j<s; j++)
            {
                cin>>x;
                temp.push_back(x);
            }
            sort(temp.begin(), temp.end());
            max1.push_back(temp[0]);
            max2.push_back(temp[1]);
            temp.clear();
        }
        sort(max1.begin(),max1.end());
        sort(max2.begin(),max2.end(),greater<ll>());
        for(int i=0; i<n-1; i++)
        sum+=max2[i];
        sum+=max1[0];

        cout<<sum<<"\n";



    }
}