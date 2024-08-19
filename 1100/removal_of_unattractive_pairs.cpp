#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,maxi=0;
        cin>>n;
        string str;
        cin>>str;
        map<char,int>m;
        for(int i=0; i<n; i++)
        {
            m[str[i]]++;
            maxi=max(m[str[i]],maxi);
        }
        int ans=max(n%2,n-((n-maxi)*2));
        cout<<ans<<endl;
    }
}