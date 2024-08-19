#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,count=0,count_1=0;
        long long ans=0;
        cin>>n;
        int start=n-1;
        string s;
        cin>>s;
        for(int i=0; i<n; i++)
        {
            if(s[i] == '0')
                count++;
        }
        //cout<<count<<endl;
        if(count==0)
        {
            for(int i=0; i<n; i++)
            {
                cout<<-1<<" ";
            }
        }
        else
        {
            int j=count;
            int k=n;
            for(int i=0; i<k; i++)
            {
                if(s[start]=='0')
                {
                    ans+=count_1;
                    cout<<ans<<" ";
                    start--;
                }
                else
                {
                    count_1++;
                    start--;
                }
            }
            for(int i=0;i<n-j;i++)
                cout<<-1<<" ";
        }
        cout<<"\n";
    }
}