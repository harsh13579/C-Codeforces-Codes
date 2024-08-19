#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,flag=0;;
        cin>>n;
        vector<vector<int>>v(n,vector<int>(n));
        vector<int>ans(n,(1<<30)-1);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>v[i][j];
                if(i!=j)
                {
                    ans[i]&=v[i][j];
                    ans[j]&=v[i][j];
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i!=j && (v[i][j]!=(ans[i] | ans[j])))
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag)
            cout<<"NO\n";
        else
        {
            cout<<"YES\n";
            for(int i=0;i<n;i++)
                cout<<ans[i]<<" ";
            cout<<"\n";
        }
    }
}