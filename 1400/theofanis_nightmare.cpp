#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long sum = 0;
        cin>>n;
        vector<int>v(n);
        vector<long long>v2(n);
        for(auto &i:v)
        {
            cin>>i;
        }
        v2[n-1]=v[n-1];
        for(int i=n-2;i>=0;i--)
        {
           v2[i]=v2[i+1]+v[i];
        }
        sum=v2[0];
        for(int i=1;i<n;i++)
        {
            if(v2[i]>0)
                sum+=v2[i];
        }
        cout<<sum<<endl;
    }
}