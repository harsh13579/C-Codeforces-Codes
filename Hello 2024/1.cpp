#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        if(n==m)
            cout<<"Bob"<<endl;
        else if(n>m)
        {
            n-=m;
            if(n&1)
                cout<<"Alice"<<endl;
            else
                cout<<"Bob"<<endl;
        }
        else
        {
            m-=n;
            if(m&1)
                cout<<"Alice"<<endl;
            else
                cout<<"Bob"<<endl;
        }


    }
}