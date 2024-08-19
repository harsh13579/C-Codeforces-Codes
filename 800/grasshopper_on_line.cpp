#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,k,count=0;
        cin>>x>>k;
        int arr1[x];
        if(x%k!=0)
        {
            count++;
            cout<<count<<"\n"<<x<<"\n";
        }
        else
        {
            count+=2;
            cout<<count<<"\n"<<x-1<<" 1"<<"\n";
        }

    }
}