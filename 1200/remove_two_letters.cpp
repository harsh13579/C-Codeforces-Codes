#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    //set<string> s1;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        //old=s;
        long long ans=n-1;
        for(int i=0; i<n-1; i++)
        {
            if(s[i-1]==s[i+1])
                ans--;
        }
        cout<<ans<<endl;
    }
}