#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; 
    cin>>t;
    while(t--)
    {
        long long sum=0,maxi=INT_MIN,temp,re=0,temp2=0;
        int n,k,x,i,j;
        cin>>n>>k>>x;
        vector<int>v(n);
        vector<long long>prefix(n);
        for(i=0;i<n;i++)
        {
            cin>>v[i];
            sum += v[i];
        }
        sort(v.rbegin(),v.rend());
        prefix[0]=v[0];
        for(i=1;i<n;i++)
            prefix[i]=prefix[i-1]+v[i];
        for(i=0;i<=k;i++)
        {
            sum-=re;
            temp=0;
            int end=min(i+x-1,n-1);
            temp=prefix[end]-temp2;
            if(i==n)
                temp=0; 
            maxi=max(maxi,sum-(2*temp));
            re=v[i];
            temp2+=v[i];
        }
        cout<<maxi<<endl;
    }
}