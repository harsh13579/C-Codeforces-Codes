#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        int flag=0,flag2=0,ans=0;
        cin>>s;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]=='0' && s[i-1]=='0')
            {
                flag=1;
                ans=i-1;
                break;
            }
        }
        for(int i=ans;i>=0;i--)
        {
            if(s[i]=='1' && s[i-1]=='1')
            {
                flag2=1;
                break;
            }
        }
        if(flag ==1 && flag2==1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        else if(flag ==1 && flag2==0)
        {
            cout<<"YES"<<endl;
            continue;
        }
        else
        {
            cout<<"YES"<<endl;
            continue;
        }
    }
}