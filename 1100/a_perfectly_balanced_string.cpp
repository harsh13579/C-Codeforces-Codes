#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        set<char>s1;
        for(int i=0;i<s.size();i++)
            s1.insert(s[i]);
        int flag=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=s[i%s1.size()])
            {
                flag=1;
                break;
            }
        }
        if(flag)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
}