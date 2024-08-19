#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll x,y;
        cin>>x>>y;
        ll a=x;
        ll count=3+2*(x-1-y);
        cout<<count-1<<"\n";
        vector<int> v(count-1);
        //cout<<x-1<<" "<<x<<" "<<x-1<<" ";
        int i=0;
        v[i++]=x-1;
        v[i++]=x;
        v[i++]=x-1;
        x-=1;
        for(ll q=x-1;q>=y;q--)
        {
            v[i++]=q;
        }
        //ans.push_back(x);
        for(ll q=y+1;q<x;q++)
        {
            v[i++]=q;
        }
        for(auto ele:v)
        {
            cout<<ele<<" ";
        }

        cout<<"\n";

    }
}