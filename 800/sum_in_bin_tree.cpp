#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void sum(ll n,ll *sumi)
{
    ll k=n/2;
    if(k<1)
    return;
    
    *sumi=*sumi+k;
    sum(k,sumi);
    
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,sumi=0;
        cin>>n;
        sum(n,&sumi);
        cout<<sumi+n<<endl;

    }
}