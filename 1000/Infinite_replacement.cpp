#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,a;
        cin>>s>>a;
        int count=0;
        for(int i=0;i<a.size();i++)
        {
            if(a[i]=='a')
            count++;
        }
        if(a=="a")
            cout<<1<<endl;
        else if(count>0)
            cout<<-1<<endl;
        else 
        {           
            long long ans=pow(2,s.size());
            cout<<ans<<endl;
        }
    }
}