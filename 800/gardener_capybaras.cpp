#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s,a="",b="",c="";
        cin >> s;
        if(s[0]==s[s.length()-1])
        {
            a+=s[0];
            for(int i=1;i<s.length()-1;i++)
            b+=s[i];
            c+=s[s.length()-1];
        }
        else if(s[0]==s[1])
        {
            a+=s[0];
            b+=s[1];
            for(int i=2;i<s.length();i++)
            c+=s[i];
        }
        else if(s[0]=='a' && s[1]=='b')
        {
            a+=s[0];
            for(int i=1;i<s.length()-1;i++)
            b+=s[i];
            c+=s[s.length()-1];
        }
        else
        {
            a+=s[0];
            b+=s[1];
            for(int i=2;i<s.length();i++)
            c+=s[i];
        }
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
}