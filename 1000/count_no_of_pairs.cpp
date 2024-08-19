#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int flag=0;
        long long count=0,sum=0;
        vector<int>up(26,0);
        vector<int>low(26,0);
        string s;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            if(isupper(s[i]))
            {
                up[s[i]-'A']++;
            }
            else
            low[s[i]-'a']++;
        }
        for(int i=0;i<26;i++)
        {
            if(up[i]>0 && low[i]>0)
            {
                count+=min(up[i],low[i]);
            }
        }
        for(int i=0;i<26;i++)
        {
            long long j=abs(up[i]-low[i]);
            if(j>=2)
            {
                if(j%2==0)
                    sum+=j/2;
                else
                    sum+=(j-1)/2;
            }

            if(sum>k)
            {
                flag=1;
                count+=k;
                break;
            }
        }
        if(flag)
            cout<<count<<endl;
        else
            cout<<count+sum<<endl;
    }  
}