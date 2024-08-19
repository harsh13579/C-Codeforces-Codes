#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,flag=0;
        cin>>n>>k;
        for(int i=0;i<=100;i++)
        {
            int ans=n-i;
            int b=(i*(i-1))/2 + (ans*(ans-1))/2;
            if(b==k)
            {
                cout<<"YES"<<endl;
                for(int z=0;z<i;z++)
                cout<<"1 ";
                for(int z=0;z<n-i;z++)
                cout<<"-1 ";
                cout<<endl;
                flag=1;
                break;
            }
        }
        if(flag!=1)
        cout<<"NO"<<endl;
    }
}