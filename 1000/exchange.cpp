#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        int a,b;
        cin>>n>>a>>b;
        if(n<a)
        {
            cout<<1<<endl;
            continue;
        }
        if(a<=b)
        {
            if(n%a==0)
            cout<<n/a<<endl;
            else
            cout<<n/a+1<<endl;
        }
        else
        {
            cout<<1<<endl;
        }
    }
}