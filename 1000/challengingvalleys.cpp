#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,j,count=0;
        cin>>n;;
        vector<ll>v;
        for(int i=0; i<n; i++)
        {
            cin>>j;
            if(i==0 || j!=v.back())
            v.push_back(j);
        }
        for(int i=0; i<v.size(); i++)
        {
            if(v[i+1]>v[i] && v[i-1]>v[i])
            count++;
            else if(i==v.size()-1 && v[i-1]>v[i])
            count++;
            else if(i==0 && v[i]<v[i+1])
            count++;
            else if(i==0 && i==v.size()-1)
            count++;
        }
        if(count==1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;

    }
}