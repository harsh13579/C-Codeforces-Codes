#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b,ans=0;
        cin>>n;
        vector<int>v;
        int maxi_1=INT_MIN,mini2=INT_MAX;
        for(int i=0; i<n; i++)
        {
            cin>>a>>b;
            if(a==2)
                mini2=min(mini2,b);
            else if(a==1)
                maxi_1=max(maxi_1,b);
            else
                v.push_back(b);
        }
        ans=mini2-maxi_1+1;
        for(auto i:v)
        {
            if(i<=mini2 && i>=maxi_1)
                ans--;
        }
        if(ans>=0)
            cout<<ans<<endl;
        else
            cout<<0<<endl;
    }
}