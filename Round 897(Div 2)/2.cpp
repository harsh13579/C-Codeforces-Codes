#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,count;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        count=0;
        for(int i=0;i<n/2;i++)
        {
            if(s[i] != s[n-i-1])
                count++;
        }
        vector<char>ans(n+1,'0');
        for(int i=count;i<=n-count;i+=(n%2 ==0 ? 2:1))
        {
           ans[i]='1';
        }
        for(int i=0;i<n+1;i++)
            cout<<ans[i];
        cout<<"\n";
    }
    return 0;
}