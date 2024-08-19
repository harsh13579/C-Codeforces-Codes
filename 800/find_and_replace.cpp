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
        bool visited[n];
        for(int i=0;i<n;i++)
        visited[i]=false;
        
        char ans;
        string s;
        cin>>s;
        if(n==1)
        {
            cout<<"YES"<<endl;
            continue;
        }
        for(int i=0; i<n; i++)
        {
            if(visited[i]==false)
            {
                if(i%2==0)
                ans = '1';
                else
                ans = '0';
                char res=s[i];
                for(int j=i; j<n; j++)
                {
                    if(res == s[j])
                    {
                        s[j] = ans;
                        visited[j] = true;
                        //cout<<s<<endl;
                    }
                }
            }
        }
        for(int i=0; i<n; i++)
        {
            if(i+1<n)
            {
                if(s[i] == s[i+1])
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag!=1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}