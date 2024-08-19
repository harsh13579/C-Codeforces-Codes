#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,i,j;
    long long sum;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        vector<int> v(n);
        sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        i = 2*k-1, j = n-1-k;

        int s=0,e=n-1,i=2*k-1,j=n-1-k;
        long long ssum=0,esum=0;
        for(int x=s;x<=i;x++)
        {
            ssum+=v[x];
        }
        for(int x=j+1;x<=e;x++)
        {
            esum+=v[x];
        }
        while(k>0)
        {
            if(ssum>=esum)
            {
                ssum-=v[i]+v[i-1];
                i-=2;
                esum-=v[e];
                e-=1;
            }
            else{
                esum-=v[j+1];
                j+=1;
                ssum-=v[s]+v[s+1];
                s+=2;
            }
            k--;
        }

        for(int h=i+1;h<=j;h++)
        {
            sum+=v[h];
        }
        cout<<sum<<"\n";
    }
    return 0;
}