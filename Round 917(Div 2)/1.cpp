#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int neg=0,flag=0;
        int idx;
        vector<int>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            if(v[i]<0)
            {
                neg++;
                idx=i+1;
            }
            if(v[i]==0)
                flag=1;
        }
        if(neg==0 && !flag)
        {
            cout<<1<<endl;
            cout<<1<<" "<<0<<endl;
        }
        else if(flag)
        {
            cout<<0<<endl;
        }
        else if(neg%2==0)
        {
            cout<<1<<endl;
            cout<<idx<<" "<<0<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
    }
}