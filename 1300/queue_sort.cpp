#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,idx=0,flag=0,ans=0;
        cin>>n;
        vector<int>v(n);
        int mini=INT_MAX;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            if(v[i]<mini)
            {
                mini=v[i];
                idx=i;
            }
        }
        for(int i=idx;i+1<n;i++)
        {
            if(v[i]>v[i+1])
            {
                flag=1;
                break;
            }
        }
        if(flag)
            cout<<-1<<endl;
        else
        {
            for(int i=n-1;i>=1;i--)
            {
                if(v[i]<v[i-1])
                {
                    ans=i;
                    break;
                }
            }
            cout<<ans<<endl;
        }

    }
}