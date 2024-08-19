#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,flag=0;
        cin>>n;
        if(n%2==0)
        {
            cout<<n/2<<" "<<n/2<<endl;
            continue;
        }
        else
        {
            for (ll i = 2; i <= sqrt(n); i++) 
            {
                if (n % i == 0) 
                {
                    flag = 1;
                    cout<<n/i<<" "<<n-(n/i)<<endl;
                    break;
                }
            }
            if(flag==0)
            {
                cout<<1<<" "<<n-1<<endl;
            }
        }
    }
}