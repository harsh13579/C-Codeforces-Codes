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
        vector<char>v;
        if(s[0]=='?')
        v.push_back('0');
        else
        v.push_back(s[0]);
        for(int i=1; i<s.size(); i++)
        {
            if(v[i-1]=='0' )
            {
                if(s[i]=='?')
                v.push_back('0');
                else
                v.push_back(s[i]);
            }
            else if(v[i-1]=='1' )
            {
                if(s[i]=='?')
                v.push_back('1');
                else
                v.push_back(s[i]);
            }
        }
        for(auto ele:v)
        cout<<ele;
        cout<<endl;

    }
}