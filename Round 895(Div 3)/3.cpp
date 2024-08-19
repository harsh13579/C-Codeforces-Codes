#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool prime(int n)
{
    if(n==0 || n==1) return false;
    for(int i=2; i<=sqrt(n); i++)
    {
        if(n%i==0) 
        {
        return false;
        break;
        }
    }
    return true;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,r;
        cin>>l>>r;
        if(r<=3 || (l==r && prime(r)))
        {
            cout<<-1<<endl;
        }
        else if(r%2==0)
        {
            cout<<r-2<<" "<<2<<endl;
        }
        else if(r%2==1 && r!=l)
        {
            cout<<r-3<<" "<<2<<endl;
        }
        else
        {
            for(int i=2;i<r;i++)
            {
                if(r%i==0)
                {
                    cout<<r-i<<" "<<i<<endl;
                    break;
                }
            }
        }
    }
}