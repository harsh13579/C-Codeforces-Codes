#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        //long long mini=1e18;
        vector<long long>v(n);
        //map<long long, long long>m;
        for(auto &i:v)
            cin>>i;
        if(k>=3)
            cout<<0<<endl;
        else
        {
            sort(v.begin(),v.end());
            long long mini=v[0];
            for(int i=0;i+1<n;i++)
            {
                //m[abs(v[i]-v[i+1])]++;
                mini=min(abs(v[i]-v[i+1]),mini);
            }
            if(k==1)
                cout<<mini<<endl;
            else
            {
                //mini=1e18;
                for(int i=0;i<n;i++)
                {
                    for(int j=0;j<i;j++)
                    {
                        long long o=abs(v[i]-v[j]);
                        int q=lower_bound(v.begin(),v.end(),o)-v.begin();
                        mini=min(mini,abs(o-v[q]));
                        if(q>0)
                            mini=min(abs(o-v[q-1]),mini);
                    }
                }
                cout<<mini<<endl;
            }
        }
        


    }
}