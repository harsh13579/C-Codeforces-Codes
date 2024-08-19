#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        map<int,int>ma,ma2;
        int n,m,count=0,x,mini2=INT_MAX,a,b;
        cin>>n>>m;
        for(int i=0;i<m;i++)
        {
            cin>>a>>b;
            ma[a]++;
            ma[b]++;
        }
        for(auto ele:ma)
        {
            if(ele.second!=1)
            {
                ma2[ele.second]++;
            }
        }
        if(ma2.size()==1)
        {
            for(auto ele:ma2)
                x=ele.first;
        }
        else
        {
            for(auto ele:ma2)
            {
                mini2=min(ele.second,mini2);
            }
            for(auto ele:ma2)
            {
                if(ele.second==mini2)
                {
                    x=ele.first;
                    break;
                }
            }
        }
        for(auto ele:ma)
        {
            if(ele.second==1)
                count++;
        }
        cout<<x<<" "<<count/x<<endl;
    }
}