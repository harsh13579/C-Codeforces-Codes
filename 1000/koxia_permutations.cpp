#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;

        if(k==1)
        {
            for(int i=0;i<n;i++)
            cout<<i+1<<" ";
            cout<<"\n";
        }
        else
        {
            ll count=0;
            ll m=1;
            ll q=n;
            while(n!=0)
            {
                cout<<q--<<" ";
                n--;
                count++;
                if(n==0)
                break;
                if(count==k-1)
                {
                    cout<<m++<<" ";
                    n--;
                    count=0;
                }
            }
            cout<<"\n";

        }
    }
}