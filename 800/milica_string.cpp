#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k,count=0;
        cin>>n>>k;
        string s;
        cin>>s;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i] == 'B')
                count++;
        }
        if(count==k)
            cout<<0<<endl;
        else if(count>k)
        {
            int i;
            for(i=0;i<n;i++)
            {
                if(s[i]=='B')
                    count--;
                if(count==k)
                    break;
            }
            cout<<1<<endl;
            cout<<i+1<<" "<<'A'<<endl;
        }
        else
        {
            int i;
            for(i=0;i<n;i++)
            {
                if(s[i]=='A')
                    count++;
                if(count==k)
                    break;
            }
            cout<<1<<endl;
            cout<<i+1<<" "<<'B'<<endl;
        }
    }
}

