#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,m,sum1=0,sum2=0;
        cin>>n>>m;
        ll arr[n],arr2[m];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum1+=arr[i];
        }
        for(int i=0;i<m;i++)
        {
            cin>>arr2[i];
            sum2+=arr2[i];
        }
        if(sum1>sum2)
        {
            cout<<"Tsondu"<<endl;
        }
        else if(sum1<sum2)
        {
            cout<<"Tenzing"<<endl;
        }
        else
        {
            cout<<"Draw"<<endl;
        }
    }
}