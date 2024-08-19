#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<int>v(m),diff;
        for(auto &i:v)
            cin>>i;
        sort(v.begin(),v.end());
        for(int i=0;i+1<m;i++)
            diff.push_back(v[i+1]-v[i]-1);
        diff.push_back(v[0]+n-v[m-1]-1);
        sort(diff.begin(),diff.end(),greater<int>());
        int day=0,protect=0;
        for(int i=0;i<diff.size();i++)
        {
            if((diff[i]-2*day)>0)
                protect+=diff[i]-1-2*day;
            else
                break;
            if((diff[i]-2*day)==1)
                protect++;
            
            day+=2;
        }
        cout<<n-protect<<endl;
        
    }
}