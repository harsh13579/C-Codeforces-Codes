#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string m;
        int ans=1;
        cin>>m;
        if(m[0] == '0')
            {
                cout<<0<<endl;
                continue;
            }
        else
        {
            if(m[0] == '?')
                ans=9;
            for(int i=1; i<m.size(); i++)
            {
                if(m[i] == '?')
                ans=ans*10;
            }
            if(ans != 1)
            cout<<ans<<endl;
        }
        if(ans == 1)
        cout<<ans<<endl;
    }
}