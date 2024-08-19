#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,maxi=0,q;
        cin>>n;
        vector<int>a(n,0);
        vector<int>b(n,0);
        set<char>s1;
        string s;
        cin>>s;
        for(int j=0;j<n;j++)
        {
            s1.insert(s[j]);
            a[j]=s1.size();
        }
        s1.clear();
        for(int j=n-1;j>0;j--)
        {
            s1.insert(s[j]);
            b[j]=s1.size();
        }
        for(int j=0;j<n-1;j++)
        {
            q=a[j]+b[j+1];
            maxi=max(maxi,q);
        }
        
        cout<<maxi<<endl;

    }
}

