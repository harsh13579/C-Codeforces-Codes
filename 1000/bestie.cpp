#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,gcd=0,flag1=0,flag2=0,flag3=0;
        cin>>n;
        vector<ll>v(n);
        vector<ll>gcdd(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            if(v[i]==1)
            flag1=1;
            gcd=__gcd((ll)gcd,v[i]);
            gcdd[i]=__gcd(v[i],(ll)i+1);

        }
        if(gcd==1 || flag1==1)
        {
            cout<<0<<endl;
            continue;
        }
        int res,res1;
        for(int i=n-1; i>=0; i--)
        {
            int a=__gcd(gcdd[i],(ll)gcd);
            if(a==1)
            {
                res=n-(i+1)+1;
                flag3=1;
                break;
            }
        }
        for(int i=n-1; i>=0; i--)
        {
            for(int j=i-1; j>=0; j--)
            {
                if(__gcd(gcdd[i],gcdd[j])==1)
                {
                    res1=n-(i+1)+1+n-(j+1)+1;
                    flag2=1;
                    break;
                }
            }
            if(flag2==1)
            break;
        }
        // for(int i=0; i<n; i++)
        // cout<<gcdd[i]<<" ";
        // cout<<"\n";
        cout<<min(res1,res)<<endl;

    }
}