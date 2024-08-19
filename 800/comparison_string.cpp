#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,count=0,flag,maxi=0;
        cin>>n;
        string s;
        cin>>s;
        if(s[0]=='>')
        flag=0;
        else
        flag=1;
        for(int i=0;i<n;i++)
        {
            if(s[i] == '>')
            {
                if(flag==0)
                {
                    flag=1;
                    count=0;
                }
                count++;
            }
            else
            {
                if(flag==1)
                {
                    flag=0;
                    count=0;
                }
                count++;
            }
            maxi=max(maxi,count);

        }
        cout<<maxi+1<<endl;

    }
}