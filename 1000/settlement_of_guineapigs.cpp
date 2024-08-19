#include<bits/stdc++.h>
using namespace std;    
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,box=0;
        int x;
        cin>>n;
        vector<ll>v;
        ll count1=0,count2=0;
        for(int i=0; i<n; i++)
        {
            cin>>x;
            if(x==1)
            {
                count2++;
                ll k=(count1+2)/2+count2;
                if(count1>0)
                box=max(box,k);
                else
                box=max(box,count2);
            }
            else
            {
                
                count1+=count2;
                count2=0;
                ll q=(count1+2)/2;
                if(count1>1)
                box=max(box,q);    
            }
        }
        cout<<box<<endl;

    }
}