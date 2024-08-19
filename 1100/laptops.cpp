#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,flag=0,x;
    cin>>n;
    vector<int>a,b;
    for(int i=0;i<2*n;i++)
    {       
        cin>>x;
        if(i%2==0)
            a.push_back(x);
        else 
            b.push_back(x);
    }
    vector<pair<int,int>>z;
    for(int i=0;i<n;i++)
    {
        z.push_back(make_pair(a[i],b[i]));
    }
    sort(z.begin(), z.end());
    for(int i=0;i+1<n;i++)
    {
        if(z[i].first!=z[i+1].first && z[i].second>z[i+1].second)
        {
            flag=1;
            cout<<"Happy Alex"<<endl;
            break;
        }
    }
    if(!flag)
    {
        cout<<"Poor Alex"<<endl;
    }


}