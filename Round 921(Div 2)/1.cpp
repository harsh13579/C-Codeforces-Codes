#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s="";
        char q='a';
        string ans="";
        for(int i=0;i<k;i++)
        {
            s+=q;
            q++;
        }
        for(int i=0;i<n;i++)
        {
            ans+=s;
        }
        cout<<ans<<endl;
        
    }
}