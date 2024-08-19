#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll b,k,n=0,j=1;
    cin>>b>>k;
    ll arr[k];
    for(ll i=0;i<k;i++)
    cin>>arr[i];
    for(ll i=k-1;i>=0;i--)
        {
            n=(n+(arr[i]*j))%2;
            j=(j*b)%2;
        }
        
    if(n==0)
    cout<<"even"<<endl;
    else
    cout<<"odd"<<endl;
}