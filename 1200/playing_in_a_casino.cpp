#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,m;
        long long ans=0;
        cin>>n>>m;
        vector<vector<long long> >v(n,vector<long long>(m));
        for(long long i=0;i<n;i++)
        {
            for(long long j=0;j<m;j++)
                cin>>v[i][j];
        }
        // for(long long i=0;i<n;i++)
        // {
        //     for(long long j=0;j<m;j++)
        //         cout<<v[i][j]<<" ";
        //     cout<<endl;
        // }
        for(long long i=0;i<m;i++)
        {
            vector<long long>a;
            for(long long j=0;j<n;j++)
                a.push_back(v[j][i]);
            
            sort(a.begin(),a.end());
            // for(auto i:a)
            //     cout<<i<<" ";
            //cout<<endl;
            long long in_sum=0;
            for(long long k=0;k<a.size();k++)
            {
                ans+=(a[k]*k-in_sum);
                in_sum+=a[k];
                //cout<<"IN_SUM"<<i<<":"<< in_sum<<endl;
            }
            //cout<<endl;
            
        }
        cout<<ans<<endl;

    }

}