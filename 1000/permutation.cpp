#include<bits/stdc++.h>
using namespace std;   
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n;
        vector<int> v[n+1];
        vector<int>ans(n+1);
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n-1; j++)
            {
                cin>>k;
                v[k].push_back(j+1);
            }
        }
        for(int i=1; i<=n; i++)
        {
            sort(v[i].begin(),v[i].end());
        }
        for(int i=1; i<=n-2; i++)
        {
            for(int j=1; j<=n; j++)
            {
                if(v[j][n-2]==i)
                {
                    ans[i]=j;
                }
            }
        }
        for(int j=1; j<=n; j++)
        {
            if(v[j][n-2]==n-1)
            {
                if(v[j][0]!=v[j][n-2])
                {
                    ans[n-1]=j;
                }
                else
                {
                    ans[n]=j;
                }
            }
        }
        for(int i=1;i<=n;i++)
        cout<<ans[i]<<" ";
        cout<<"\n";

    }
} 
