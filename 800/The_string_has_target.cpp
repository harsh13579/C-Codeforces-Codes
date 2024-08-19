#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,flag=0;
        cin>>n;
        char mini='z'+1;
        map<char,int>m;
        string s;
        cin>>s;
        vector<char>ans;
        char c=s[0];
        int i=1;
        while(i<n)
        {
            if(s[i]!=c)
            break;
            i++;
        }
        for(int a=i;a<n;a++)
        {
            if(s[a]<=c)
            {
                m[s[a]]=a;
                mini=min(mini,s[a]);
            }
        }
        if(mini!='z'+1)
        {
            ans.push_back(mini);
            flag=1;
        }
        for(int a=0;a<n;a++)
        {
            if(a==m[mini])
            {
                if(flag==1)
                continue;
                else
                ans.push_back(s[a]);
            }
            else
            {
                ans.push_back(s[a]);
            }
        }

        for(auto ele:ans)
        cout<<ele;
        cout<<"\n";

    }
}