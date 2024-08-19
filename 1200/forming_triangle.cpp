#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        map<int,int>m;
        vector<int>v(n);
        vector<pair<int,int>>k;
        for(auto &i:v)
        {
            cin>>i;
            m[i]++;
        }
        if(n<3)
            cout<<0<<endl;
        else
        {
            k.assign(m.begin(),m.end());
            vector<int>pre(k.size());
            pre[0]=k[0].second;
            for(int i=1;i<pre.size();i++)
                pre[i]=pre[i-1]+k[i].second;
            int ans=0;
            for(int i=0;i<k.size();i++)
            {
                if(k[i].second < 2)
                    continue;
                else if(k[i].second == 2)
                {
                    if(i>0)
                        ans += pre[i-1];
                }
                else if(k[i].second >=3)
                {
                    int sum1 = 1;
                    int sum2 = 1;
                    for(int j=1;j<=3;j++)
                        sum2 = sum2*(k[i].second - 3 + j)/j;
                    for(int j=1;j<=2;j++)
                        sum1 = sum1*(k[i].second - 2 + j)/j;
                    if(i>0)
                        ans += (sum2) + (sum1)*pre[i-1];
                    else
                        ans += sum2;
                }
            }
            cout<<ans<<"\n";
        }
    }
}