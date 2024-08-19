#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,maxi=INT_MIN;
        cin>>n;
        vector<int>a(n),b(n),ans;
        vector<pair<int,int>>c;
        for(auto &i:a)
            cin>>i;
        for(auto &i:b)
            cin>>i;
        for(int i=0;i<n;i++)
        {
            c.push_back(make_pair(a[i]-b[i],i));
            maxi=max(a[i]-b[i],maxi);
        }
        for(auto i:c)
            if(maxi==i.first)
                ans.push_back(i.second+1);
        cout<<ans.size()<<endl;
        for(auto i:ans)
            cout<<i<<" ";
        cout<<"\n";
    }
}