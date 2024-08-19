#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long a,b;
        cin>>a>>b;
        if(__gcd(a,b)>1)
        {
            cout<<2<<endl;
            cout<<a-1<<" "<<1<<endl;
            cout<<a<<" "<<b<<endl;
        }
        else
        {
            cout<<1<<endl;
            cout<<a<<" "<<b<<endl;
        }
    }
}