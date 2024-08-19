#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n;
        map<int,int>m;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            if(x%2==0)
            m[0]++;
            else
            m[1]++;
        }
        if(m[1]==0)
        {
            cout<<"YES"<<endl;
        }
        else if(m[0]==0)
        {
            if(m[1]%2==0)
            {
                cout<<"YES"<<endl;
            }
            else
            cout<<"NO"<<endl;
        }
        else if(m[1]%2==0)
        {
            cout<<"YES"<<endl;
        }
        else
        cout<<"NO"<<endl;
    }
}