#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for(auto &i:v)
            cin>>i;
        map<double,long long>m;
        long long res=0;
        for(int i=n-1; i>=0; i--)
        {
            double k=v[i]-log2(v[i]);
            res+=m[k];
            m[k]++;
        }
        cout<<res<<endl;
    }
}