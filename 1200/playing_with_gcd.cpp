#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,flag=0;
        cin>>n;
        vector<int>a(n),b(n+1);
        for(auto &i:a)
            cin>>i;
        b[0]=a[0];
        for(int i=0;i<n;i++)
        {
            b[i+1]=(a[i]*a[i+1])/(__gcd(a[i+1],a[i]));
        }
        b[n]=a[n-1];
        for(int i=0;i<n;i++)
        {
            if(__gcd(b[i],b[i+1])!=a[i])
            {
                flag=1;
                break;
            }
        }
        if(flag)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}