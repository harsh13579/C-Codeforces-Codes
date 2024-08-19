#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n,t,maxi=0;
        cin>>n>>t;
        int a[n],b[n];
        vector<pair<int,int>>p;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        for(int i=0;i<n;i++)
        {
            if(t-a[i]>=i)
            {
                p.push_back(make_pair(b[i],i));
            }
        }
        if(p.size()==0)
        cout<<-1<<endl;
        else
        {
           sort(p.begin(), p.end());
           cout<<p[p.size()-1].second+1<<endl;
        }
    }
}