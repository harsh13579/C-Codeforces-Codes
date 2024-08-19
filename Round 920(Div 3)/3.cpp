#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,f,a,b;
        cin>>n>>f>>a>>b;
        vector<long long>v(n+1),diff;
        v[0]=0;
        for(long long i=1; i<=n; i++)
        {
            cin>>v[i];
            diff.push_back(abs(v[i]-v[i-1]));
        }
        for(long long i=0; i<diff.size(); i++)
        {
            f-=min(diff[i]*a,b);
        }
        if(f>0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

}
