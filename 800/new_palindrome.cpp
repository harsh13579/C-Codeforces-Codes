#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int flag=0,a;
        string s;
        cin>>s;
        int n=s.length();
        if(n%2==0)
        a=(n/2);
        else
        a=(n/2)+1;

        //cout<<a;
        for(int i=a;i<s.length();i++)
        {
            if((i+1)<s.length())
            {
                if(s[i]!=s[i+1])
                {
                    flag=1;
                    cout<<"YES\n";
                    break;
                }
                else
                {
                    continue;
                }
            }
            else
            break;
        }
        if(flag!=1)
        cout<<"NO\n";
    
    }
}