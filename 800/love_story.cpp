#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int indices=0;
        string str ="codeforces";
        string str2;
        cin>>str2;
        for(int i=0; i<str2.length(); i++)
        {
            if(str2[i] != str[i])
            indices++;
        }
        cout<<indices<<endl;
    }
}