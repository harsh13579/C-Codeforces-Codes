#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        map<long long,long long>m;
        int n,flag=0;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            if(i%2!=0)
                v[i]*=-1;       
        }
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=v[i];
            if(m[sum] || sum==0)
            {
                flag=1;
                break;
            }
            m[sum]++;
        }
        if(!flag)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;

    }
}