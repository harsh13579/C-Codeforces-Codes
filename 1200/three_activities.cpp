#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int days;
        cin>>days;
        long long ans=0;
        vector<int>a(days),b(days),c(days);
        vector<pair<int,int>> a_pair,b_pair,c_pair;
        for(int i=0; i<days; i++)
        {
            cin>>a[i];
            a_pair.push_back(make_pair(a[i],i));
        }
        for(int i=0; i<days; i++)
        {
            cin>>b[i];
            b_pair.push_back(make_pair(b[i],i));
        }
        for(int i=0; i<days; i++)
        {
            cin>>c[i];
            c_pair.push_back(make_pair(c[i],i));
        }
        sort(a_pair.begin(), a_pair.end(),greater<pair<int,int>>());
        sort(b_pair.begin(), b_pair.end(),greater<pair<int,int>>());
        sort(c_pair.begin(), c_pair.end(),greater<pair<int,int>>());
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                for(int k=0; k<3; k++)
                {
                    if(a_pair[i].second!=b_pair[j].second && a_pair[i].second!=c_pair[k].second && b_pair[j].second!=c_pair[k].second)
                        ans=max(ans,(long long)a_pair[i].first+b_pair[j].first+c_pair[k].first);
                }
            }
        }
        cout<<ans<<endl;
    }
}