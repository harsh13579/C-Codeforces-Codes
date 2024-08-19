#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,flag=0;
        cin>>n;
        vector<int>v,diff;
        map<int,int>m;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        for(int i = 0; i+1< n; i++)
        {
            int g=v[i+1]-v[i];
            diff.push_back(g);
            if(g==2)
            m[2]++;
            else if(g==3)
            m[3]++;
            else if(g>3)
            m[4]++;
        }
        if(m[4]>0)
        cout<<"NO"<<endl;
        else if(m[3]>1)
        cout<<"NO"<<endl;
        else if(m[2]<3 && m[3]==0)
        cout<<"YES"<<endl;
        else if(m[3]==1 && m[2]==0)
        cout<<"YES"<<endl;
        else 
        cout<<"NO"<<endl;
    }
}