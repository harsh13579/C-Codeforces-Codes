#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int count=0;
        cin>>s;
        if(s.size()==1)
        {
            if(s[0]=='_')
            {
                cout<<2<<endl;
                continue;
            }
            else if(s[0]=='^')
            {
                cout<<1<<endl;
                continue;
            }
        }
        if(s[0] == '_')
        {
            count++;
            if(s[1] == '_')
            count++;
        }
        for(int i = 1;i<s.size();i++)
        {
            if(s[i] == '_' && s[i+1]=='_')
            {
                count++;
            }
            if(i==s.size()-1)
            {
                if(s[i] == '_')
                count++;
            }
        }
        cout << count <<endl;

    }
}