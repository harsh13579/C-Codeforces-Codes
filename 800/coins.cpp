#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,k;
        cin>>n>>k;
        if(n%k == 0 || n%2==0)
        {
            cout<<"YES"<<endl;
            continue;
        }
        else
        {
            if(k%2==0)
            {
                cout<<"NO"<<endl;
                continue;
            }
            else
            {
                cout<<"YES"<<endl;
                continue;
            }
        }
    }
}