#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        int res=0;
        cin>>n;
        map<int,int>m;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            m[v[i]]=i;
        }
        sort(v.begin(),v.end());
        for(int i=0;i+1<n;i++)
        {
            if(m[v[i]]>m[v[i+1]])
                res++;
        }
        cout<<res<<endl;
    }
}