#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,j,maxi=0;
        cin>>n;
        char s;
        cin>>s;
        string k;
        cin>>k;
        ll dist[n];
        if(k[n-1]=='g')
        dist[n-1]=n-1;
        else
        dist[n-1]=-1;
        for(ll i=n-2;i>=0;i--)
        {
            if(k[i]=='g')
            dist[i]=i;
            else
            dist[i]=dist[i+1];
        }
        for(int i=0;i<n;i++)
        {
            if(k[i]==s)
            {
                if(dist[i]==-1)
                maxi=max(maxi,n-i-1+dist[0]+1);
                else
                maxi=max(maxi,dist[i]-i);
            }
        }
    cout<<maxi<<endl;        
    }

}