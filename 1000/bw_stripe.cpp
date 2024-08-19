#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,count=0,count1=0,mini=INT_MAX;
        cin>>n>>k;
        vector<char> v(n);
        vector<int>dist(n+1);
        dist[0]=0;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            if(v[i]=='B')
            dist[i+1]=dist[i];
            else
            dist[i+1]=dist[i]+1;
        }
        for(int i=k;i<=n;i++)
        {
            mini=min(mini,dist[i]-dist[i-k]);
        }
        cout<<mini<<endl;
    }
}
