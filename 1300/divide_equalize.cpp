#include<bits/stdc++.h>
using namespace std;
const int N=1000000;
int spf[N+1];
void sieve()
{
    for(int i=1;i<=N;i++)
        spf[i]=i;
    for(int i=2;i*i<=N;i++)
    {
        if(spf[i]==i)
        {
            for(int j=i*i;j<=N;j+=i)
            {
                if(spf[j]==j)
                    spf[j]=i;
            }
        }
    }

}
int main()
{
    sieve();
    int t;
    cin>>t;
    while(t--)
    {
        int n,flag=0;
        cin>>n;
        vector<int>v(n);
        for(auto &i:v)
            cin>>i;
        map<int,int>m;
        for(int i=0;i<n;i++)
        {
            while(v[i]!=1)
            {
                m[spf[v[i]]]++;
                v[i]/=spf[v[i]];
            }
        }
        for(auto i:m)
        {
            if(i.second%n!=0)
                flag=1;
        }
        if(flag)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}