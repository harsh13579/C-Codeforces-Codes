#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long count=0;
        cin>>n;
        set<char>s1;
        string s;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            s1.insert(s[i]);
            count+=s1.size();
        }
        cout<<count<<endl;
    }
}