#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        vector<int>v(n);
        vector<long long>res;
        for(auto &i:v)
            cin>>i;
        int s,d,k;
        for(int j=0;j<q;j++)
        {
            long long ans=0;
            cin>>s>>d>>k;
            int mul=1;
            for(int i=s-1;mul<=k;i+=d)
            {
                ans+=(v[i]*mul);
                mul++;
            }
            res.push_back(ans);
        }
        for(auto i:res)
            cout<<i<<" ";
        cout<<"\n";
    }
}